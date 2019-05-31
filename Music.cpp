#include "Music.h"
#include <clocale>
#include  <algorithm>
#include <iomanip>
#include <cstring>
#include <ctime>



using std::endl;
using std::cout;
using std::cin;

void Song::get_info(std::string info)
{
	auto pos = 0;
	std::string subs[4];

	pos = info.find(';');
	subs[0] = info.substr(0, pos);
	info.erase(0, pos + 1);
	name = subs[0];

	pos = info.find(';');
	subs[1] = info.substr(0, pos);
	info.erase(0, pos + 1);
	singer = subs[1];

	pos = info.find(';');
	subs[2] = info.substr(0, pos);
	info.erase(0, pos + 1);
	quality = subs[2];

	pos = info.find(';');
	subs[3] = info.substr(0, pos);
	info.erase(0, pos + 1);
	likes = stol(subs[3]);
	
}



void Music_list::add_song(std::string info)
{

	Song buf{};

	buf.get_info(info);

	songs.push_back(buf);

}

int Music_list::Get_Songs_Amount() const
{
	return songs.size();
}

Song& Music_list::operator[] (const int index)
{
	return songs[index];
}

std::ostream & operator <<(std::ostream &out, const Music_list &m)
{
	for (const auto& d : m.songs)
	{
		out << d.name << ";" << d.singer << ";" << d.quality << ";" << d.likes << std::endl;
	}

	return out;
}

std::istream & operator >>(std::istream &in, Music_list &m)
{
	std::string str;

	std::getline(in, str);

	auto pos = 0;
	std::string parts[4];

	for (auto i = 0; i < 3; i++)
	{
		pos = str.find(';');
		parts[i] = str.substr(0, pos);
		str.erase(0, pos + 1);
	}
	parts[3] = str;

	Song d;
	d.name = parts[0].c_str();
	d.singer = parts[1].c_str();
	d.quality = std::stoll(parts[2]);
	d.likes = std::stoll(parts[3]);



	m.songs.push_back(d);

	return in;
}

void Music_list::Sort_via_Name()
{
	//std::sort(info, info + amount, [](const Data x, const Data y) -> bool
	std::sort(songs.begin(), songs.end(), [](const Song x, const Song y) -> bool
	{
		return x.name > y.name;
	});
}
void Music_list::Sort_via_Popularity()
{
	//std::sort(info, info + amount, [](const Data x, const Data y) -> bool
	std::sort(songs.begin(), songs.end(), [](const Song x, const Song y) -> bool
	{
		return x.likes > y.likes;
	});
}




std::vector<Song>::iterator Music_list::begin()
{
	return songs.begin();
}

std::vector<Song>::iterator Music_list::end()
{
	return songs.end();
}



std::vector<Song>Music_list::find_first_name(std::string const& c_name)
{
	std::vector<Song>::iterator temp = std::find_if(songs.begin(), songs.end(), [&c_name](Song const& c)
	{
		int len1 = c.name.length(), len2 = c_name.length();
		int min_len = len1 <= len2 ? len1 : len2;

		return c.name.substr(0, min_len) == c_name.substr(0, min_len);

	});

	std::vector<Song> found_songs;

	while (temp != songs.end())
	{
		found_songs.push_back(*temp);

		temp = std::find_if(++temp, songs.end(), [&c_name](Song const& c)
		{
			int len1 = c.name.length(), len2 = c_name.length();
			int min_len = len1 <= len2 ? len1 : len2;

			return c.name.substr(0, min_len) == c_name.substr(0, min_len);
		});
	}
	return found_songs;
}

