#pragma once

#include <iostream>
#include <fstream>
#include <clocale>
#include <string>
#include <vector>
#include <conio.h>
#include <sstream>
#include <Windows.h>
#include <iomanip>
#include <algorithm>
#include <ctime>


#ifndef _MUSIC_
#define _MUSIC_


#define K 100
#define L 40

struct Song {
public:
	std::string name;
	std::string singer;
	std::string quality;
	int likes{};

	void get_info(std::string info);
};

class Music_list
{
public:
	using vector_t = std::vector<Song>;
	vector_t songs;

	void add_song(std::string info);

	using iterator = vector_t::iterator;

	Music_list() = default;

	Music_list(Music_list const&) = delete;

	Music_list(Music_list&&) = delete;

	int Get_Songs_Amount() const;

	void Sort_via_Name();
	void Sort_via_Popularity();

	std::vector<Song> find_first_name(std::string const&);
	std::vector<Song> find_most_popular(const int likes);

	Song& operator[] (const int index);

	std::vector<Song>::iterator begin();
	std::vector<Song>::iterator end();

	friend std::ostream& operator <<(std::ostream&, const Music_list&m);
	friend std::istream& operator >>(std::istream&, Music_list&);

};

#endif



