/**************************************************************/
/* Title: song.cpp											  */
/* Course: Computational Problem Solving CPET-II			  */
/* Date: 11/30/21											  */
/* Description: Where all the functions for a song are stored */
/**************************************************************/
#include "song.h"
#include "functions.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;


Song :: Song()
{

}
// Default Constructor
Song :: Song(string MusicName,string MusicArtist,string MusicURL)
{
	name = MusicName;
	artist = MusicArtist;
	URL = MusicURL;

}

//returning the song name from the file
string Song :: getSongName()
{
	return(name);
}

//returning the artist name from the file
string Song :: getSongArtist()
{
	return(artist);
}

//returning the URL from the file
string Song :: getSongURL()
{
	return(URL);
}

//displays name and artist on console
void Song :: DisplaySongInfo()
{
	cout << "Song: " << name << " by:  "<< artist<< endl;
}









