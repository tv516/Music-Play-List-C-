/**************************************************************/
/* Title: song.h											  */
/* Course: Computational Problem Solving CPET-II			  */
/* Date: 11/30/21											  */
/* Description: Header file for the song variables/functions  */
/**************************************************************/

#ifndef SONG_H_
#define SONG_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

class Song
{
private:
	string name;
	string artist;
	string URL;


public:

	Song();
	// Default Constructor for song.cpp
	Song(string MusicName,string MusicArtist,string MusicURL);

	//Function that gets the song's name
	string getSongName();

	//Function that gets the song's artist
	string getSongArtist();

	//Function that gets the song's URL
	string getSongURL();

	//Function that display the song's name and artist
	void DisplaySongInfo();


};

#endif /* SONG_H_ */

