// Rediet Medhane
// CS II, Exam I
// Playlist Header File

#include <iostream>
#include <string>
#include "Song.h"
using namespace std;

class Playlist
{
private:
	string name;
	const int MaxSongs = 10;
	int numOfSongs;

public:
	Playlist();
	
	Playlist(string name1)
	{
		name = name1;
	}

	Song songArray[10];

	string getName()
	{
		return name;
	}

	bool hasGenre(string genrecheck)
	{
		for (int i = 0; i < 10; i++)
		{
			if (genrecheck == songArray[i].getGenre())
				return true;
			else
				return false;
		}
	}

	void addSong(Song song)
	{
			songArray[numOfSongs] = song;
			numOfSongs++;
	} 

	int numberOfSongs()
	{
		return numOfSongs;

	}

	string PlaySong(int songNumber)
	{
		return songArray[songNumber].getTitle();
		
	}

};