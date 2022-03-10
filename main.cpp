/**************************************************************/
/* Title: main.cpp											  */
/* Course: Computational Problem Solving CPET-II			  */
/* Date: 11/30/21											  */
/* Description: MusicPlaylist								  */
/**************************************************************/

#include "song.h"
#include "functions.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;


int main()
{

	vector<Song> songVector;
	vector<Song> playOne;
	vector<Song> playTwo;
	vector<Song> playThree;
	vector<Song> playFour;
	string playlist1 = " ";
	string playlist2 = " ";
	string playlist3 = " ";
	string playlist4 = " ";
	string MusicName;
	string MusicArtist;
	string MusicURL;
	int choice;
	int c=1;
	string temp;
	ifstream inFile("my_master_playlist.txt");
	ofstream outFile("created_play_list.txt");

	//opens txt file
	if(inFile.is_open())
	{
		while(!inFile.eof())
		{
			//generates name,artist,and url for each song
			getline(inFile,MusicName);
			getline(inFile,MusicArtist);
			getline(inFile,MusicURL);
			Song makeSong(MusicName,MusicArtist,MusicURL);

			songVector.push_back(makeSong); //stores txt file into vector
			cout << MusicName << endl;
		}
		inFile.close();
		cout << "All the songs are inFile"<< endl;
	}
	else cout << "Error opening up text file"; //if files never open console will spit this out

	while(c==1){
		//menu
		cout << "Music Playlist Menu"<< endl;
		cout << "1. Create" << endl;
		cout << "2. Display" << endl;
		cout << "3. Delete" << endl;
		cout << "4. Play1" << endl;
		cout << "5. Play2" << endl;
		cout << "6. Quit" << endl;
		cout << "Please Choose ";
		cin >> choice;
		//case statement for the menu
		switch(choice)
		{
		case 1:
			create(songVector,playOne,playTwo,playThree, playFour,playlist1 ,playlist2,playlist3, playlist4);
			break;
		case 2:
			display(songVector,playOne,playTwo,playThree, playFour,playlist1 ,playlist2,playlist3, playlist4);
			break;
		case 3:
			del(playOne,playTwo,playThree, playFour,playlist1 ,playlist2,playlist3, playlist4);
			break;
		case 4:
			play1(songVector);
			break;
		case 5:
			play2(songVector,playOne,playTwo,playThree, playFour,playlist1 ,playlist2,playlist3, playlist4);
			break;
		case 6:
			quit(playOne,playTwo,playThree, playFour,playlist1 ,playlist2,playlist3, playlist4);
			c = 0;
			break;
		default:
		{
			cout << "Error"<< endl; //error message is user doesn't put one of the options on the menu
		}
		}
	}
}

