//Rediet Medhane
// CS II, Exam I
// CPP File

// I affirm that all code given below was written solely by me, Rediet Medhane, and that any help I received adhered to the rules stated for this exam.

//calling both header files 
#include <iostream>
#include <string>
#include "Song.h"
#include "Playlist.h"
using namespace std;

Playlist::Playlist()
{
	numOfSongs = 0;
}


/*void Playlist::addSong(Song s)
{
	if (numOfSongs < 10)
	{
		songArray[numOfSongs];
		numOfSongs++;
	}
} */


int main()
{
	// array of songs
	static int numsongs = 9;
	Song songs[] =
	{
		Song("Human", "Rag' n' Bone Man", "ModernPop"),
		Song("Closer", "The Chainsmokers", "ModernPop"),
		Song("Chained to the Rhythm", "Katy Perry", "ModernPop"),
		Song("Smells Like Teen Spirit", "Nirvana", "Grunge"),
		Song("Black Hole", "Soundgarden", "Grunge"),
		Song("Loser", "Beck", "Grunge"),
		Song("Elvis Presley Blues", "Gillian Welch", "Americana"),
		Song("Pirate's Gospel", "Alela Diane", "Americana"),
		Song("Come On Up To The House", "Sarah Jarosz", "Americana")
	};
	//initializing a variable called playlist, assigned name "iRandomMusic"
	Playlist playlist("iRandomMusic");
	//
	for (int i = 0; i < numsongs; i++)
		playlist.addSong(songs[i]);

	Song song;
	//tests for different portions of project
	cout << playlist.getName() << endl;
	cout << song.getTitle() << " " << song.getArtist() << " " << song.getGenre() << endl;
	cout << songs[3].getTitle() << " " << songs[3].getArtist() << " " << songs[3].getGenre() << endl;

	cout << playlist.PlaySong(2)<< endl;
	cout << playlist.hasGenre("ModernPop") << endl;


	int errors = 0;

	if (numsongs!= playlist.numberOfSongs())
	{
		errors++;
		cout << "error: not counting songs correctly \n";
	}

	// Check the genre of one song
	if (playlist.PlaySong(2) == "")
	{
		errors++;
		cout << "error: title of the third song is incorrect\n";
	}

	if (playlist.PlaySong(10) != "")
	{
		errors++;
		cout << "error: index out of range not handled correctly\n";
	}

	// Check for a genre
	if (!playlist.hasGenre("Americana"))
	{
		errors++;
		cout << "error: search for genre is incorrect\n";
	}

	//if no errors, the output will just read "passed"
	if (errors == 0) cout << "Passed\n";
	else cout << "Errors: " << errors << endl;

	return errors;

} 


