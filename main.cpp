#include <stdio.h>
#include <list>
#include <iostream>
#include <cstring> 
using namespace std;

int main(void) {
	//初めは1970年の駅名リスト
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};


	printf("1970年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++) {
		std::cout << *it_f << endl;
	}


	printf("\n2019年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		if (strcmp(*it_f, "Nippori") == 0) {
			list<const char*>::iterator insert_pos = it_f;
			++insert_pos;
			eki_list.insert(insert_pos, "Nishi-Nippori");
		}
		std::cout << *it_f << endl;
	}

	printf("\n2022年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		if (strcmp(*it_f, "Sinagawa") == 0) {
			list<const char*>::iterator insert_pos = it_f;
			++insert_pos;
			eki_list.insert(insert_pos, "Takanawa Gateway");
		}
		std::cout << *it_f << endl;
	}

	return 0;
}


