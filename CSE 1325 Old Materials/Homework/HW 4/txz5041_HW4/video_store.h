#ifndef VIDEO_STORE_H
#define VIDEO_STORE_H 2016
#include "media.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Video_store {
	public:
	  void add_media(Media output);
	  
	  void check_out(int media_index, string patron_name, string patron_phone);
	  void check_in(int media_index);

	  string media_to_string(int media_index);

	  int number_of_medias();
	
	private:
	  vector<Media> medias;
};
#endif
