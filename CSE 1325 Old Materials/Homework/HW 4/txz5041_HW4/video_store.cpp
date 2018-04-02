#include "video_store.h"

void Video_store::add_media(Media output) {
	medias.push_back(output);
}

void Video_store::check_out(int media_index, string patron_name, string patron_phone) {
	medias[media_index].check_out(patron_name, patron_phone);
}

void Video_store::check_in(int media_index) {
	medias[media_index].check_in();
}

string Video_store::media_to_string(int media_index){
	return medias[media_index].to_string();
}

int Video_store::number_of_medias() {
	return medias.size();
}





