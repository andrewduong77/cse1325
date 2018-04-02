#ifndef MEDIA_H
#define MEDIA_H 2016

#include "enums.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Media
	{
	  private:
		string title;
		string leading_actor;
		string director;
		string copyright;
		Genre genre;
		Mediaa media_type;
		Age age_rating;
		string id;
		bool checked_out;
		string patron_name;
		string patron_phone;
	  public:
		Media(string m_title, string m_leading_actor, string m_director, string m_copyright, Genre m_genre, Mediaa m_media_type, Age m_age_rating, string m_id)
		{
		  title = m_title;
		  leading_actor = m_leading_actor;
		  director = m_director;
		  copyright = m_copyright;
		  genre = m_genre;
		  media_type = m_media_type;
		  age_rating = m_age_rating;
		  id = m_id;
		  patron_name = "";
		  patron_phone = "";
		  checked_out = false;
		  
		}

		bool is_checked_out();

		void check_out(string name, string phone);
		
		void check_in();
		
		string to_string();

		class Invalid_transaction : public exception {  };

};

#endif

















