#include "media.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool Media::is_checked_out()
		{  return checked_out;	}

void Media::check_out(string name, string phone){ 
		if(checked_out) {
			throw Invalid_transaction();
		}
		else{
		  patron_name = name;
		  patron_phone = phone;
		  checked_out = true;
		}
		}

void Media::check_in()  {
		if (checked_out){
			checked_out = false;
		}
		else{
			throw Invalid_transaction();
		}
		}
		
string Media::to_string() {

		string output = "\"" + title + "\"" + " with " + leading_actor + ". Directed by " + director + 
                ". "+ copyright + " (" + genres[genre] + "). " + ages[age_rating] + ". " + medias[media_type] + ". " + 
                "ID: " + id;
		if (checked_out)  {
		  output += "\nChecked out to " + patron_name + " (" + patron_phone + ") ";
		}
		return output;
}
















