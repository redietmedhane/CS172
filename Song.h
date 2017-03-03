//Rediet Medhane
// CS II, Exam I
//Song Class Header File

#ifndef song_h 
#define song_h
#include <iostream>
#include <string>
using namespace std;



class Song
{
private:
	string title;
	string genre;
	string artist;
public:
	Song()
	{
		title = "Gravity";
		artist = "John Mayer";
		genre = "ModernPop";
	}
	Song(string title1, string artist1, string genre1)
	{
		title = title1;
		artist = artist1;
		genre = genre1;

	}

	string getTitle()
	{
		return title;
	}
	string getArtist()
	{
		return artist;
	}
	string getGenre()
	{
		return genre;
	}

	bool isOfGenre(string genreInput)
	{
		if (genreInput == genre)
		return true;
	}



};

















#endif // song.h
