
#include "enums.h"
#include "video_store.h"
#include "media.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Video_store video_store;

	int cmd = -1;
	while (cmd != 0) {
	  cout << endl << endl;
  	  cout << "======================================" << endl;
  	  cout << "CSE1325 Video Rental Management System" << endl;
  	  cout << "======================================" << endl;
  	  cout << endl;
  	  cout << "Media" << endl;
  	  cout << "-----" << endl;
  	  cout << "(1) Add Media" << endl;
  	  cout << "(2) List All Media" << endl;
  	  cout << "(3) Check Out Media" << endl;
  	  cout << "(4) Check In Media" << endl;
  	  cout << endl;
  	  cout << "Utility" << endl;
  	  cout << "-------" << endl;
  	  cout << "(9) Help" << endl;
  	  cout << "(0) Exit" << endl;
   	  cout << endl;

	  cout << "Choose a number(0-9) for action: ";
  	  cin >> cmd;
  	  cin.ignore();

	  if (cmd == 1) {
		string title, leading_actor, director, copyright, id;
		int temp;
		Genre genre;
		Mediaa media_type;
		Age age_rating;
		
		cout << "Title? ";
		getline(cin, title);

		cout << "Leading Actor? ";
		getline(cin, leading_actor);

		cout << "Director? ";
		getline(cin, director);

		cout << "Copyright Year? ";
		cin >> copyright;

		for (int i = 0; i < genres.size(); ++i)
		   cout << " ("  << i << ") " << genres[i] << endl;
		cout << "Genre? ";
		cin >> temp;
		genre = (Genre) temp;
		cin.ignore();

		for (int i = 0; i < medias.size(); ++i)
		   cout << " ("  << i << ") " << medias[i] << endl;
		cout << "Media? ";
		cin >> temp;
		media_type = (Mediaa) temp;
		cin.ignore();

		for (int i = 0; i < ages.size(); ++i)
		   cout << " ("  << i << ") " << ages[i] << endl;
		cout << "Ages? ";
		cin >> temp;
		age_rating = (Age) temp;
		cin.ignore();

		cout << "Media ID? ";
		cin >> id;

		try { 
		  video_store.add_media(Media(title, leading_actor, director, copyright, genre, media_type, age_rating, id));
		} catch (Media::Invalid_transaction e) {
		  cerr << "Unable to add" << endl;
		}  
		}

		if (cmd >= 2 && cmd <= 4) {
		  cout << endl;
	  	  cout << "==========================" << endl;
  		  cout << "List of Video Rental Media" << endl;
  	  	  cout << "==========================" << endl;
		  for (int i = 0; i< video_store.number_of_medias(); ++i)
			cout << i << ") " << video_store.media_to_string(i) << endl;
	
		}
		if (cmd ==3) {
		  int output;
		  string pat_name;
		  string pat_phone;
		
		  cout << "Media number? ";
		  cin >> output;
		  cin.ignore();

		  cout << "Patron Name? ";
		  getline(cin, pat_name);
		  cout << "Patron Phone Number? ";
		  getline(cin, pat_phone);
 	          try {
       		  video_store.check_out(output, pat_name, pat_phone);
      		  } catch (Media::Invalid_transaction e) {
      		  cerr << "ERROR: That media is already checked out!" << endl;
     		  }
      
 		} 
  		if (cmd == 4) { 
     		 int output;
     		 cout << "Media number? ";
     		 cin >> output;
     		 cin.ignore();
  
    		 try {
       		   video_store.check_in(output);
      		 } catch (Media::Invalid_transaction e) {
        	 cerr << "ERROR: That media is already checked in!" << endl;
      		 }
  
   		} 
  		if (cmd == 9) {
     		  cout << "Add media first to be able to check in or check out things." << endl;
 
		} 
   		
   		if (cmd < 0 || (4 < cmd && cmd < 9) || (99 < cmd)) { 
   		  cerr << "**** Invalid command - type 9 for help" << endl << endl;
   		}
  	}
}
		  





		  




		

				




	

