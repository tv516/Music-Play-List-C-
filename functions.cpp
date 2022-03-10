/**************************************************************/
/* Title: functions.cpp										  */
/* Course: Computational Problem Solving CPET-II			  */
/* Date: 11/30/21											  */
/* Description: Where all the functions on the menu are stored*/
/**************************************************************/

#include "song.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

//global variables
vector<Song> songVector;
vector<Song> playOne;
vector<Song> playTwo;
vector<Song> playThree;
vector<Song> playFour;
string displayInput;
string deleteInput;
string playlistName;
string playlistSelect;
string MusicName;
string MusicArtist;
string MusicURL;
string temp;
string command;
int songSelect;
unsigned i,x,c,option;
ifstream inFile("my_master_playlist.txt");



void create(vector<Song> songVector,vector<Song>& playOne,vector<Song>& playTwo,vector<Song>& playThree,
		vector<Song>& playFour, string& playlist1 , string& playlist2, string& playlist3, string& playlist4)
{
	cout <<"To create a playlist. Please enter a name: ";
	cin >> playlistName;
	if(playlist1 == " ") //1st playlist
	{
		playlist1 = playlistName; //sets whatever name u choose
		cout << "Name Created: " << playlist1 << endl;
		cout << "Choose 5 songs to add onto playlist"<< endl;

		//displays all the songs
		for( i = 0; i < songVector.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << songVector.at(i).getSongName()<< endl;
		}

		//Allows user the select any song from the playlist
		cout << "Choose a song to add: ";
		cin >> songSelect;
		while(songSelect != -1) //will keep asking user to enter a song until -1 is typed
		{
			playOne.push_back(songVector.at(songSelect));
			cout << "Choose another song to add.Type (-1) when done:  ";
			cin >> songSelect;
			if(songSelect > 9)
			{
				cout << "Too high! " ;
			}
		}
		cout <<"Playlist "<< playlist1 <<" has been created" << endl; //shows that the playlist name was created
	}


	else if(playlist2 == " ") //2nd playlist
	{
		playlist2 = playlistName;//sets whatever name u choose
		cout << "Name Created: " << playlist2 << endl;
		cout << "Choose 5 songs to add onto playlist" << endl;

		//displays all the songs
		for( i = 0; i < songVector.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << songVector.at(i).getSongName() << endl;
		}

		//Allows user the select any song from the playlist
		cout << "Choose another song to add: ";
		cin >> songSelect;
		while(songSelect != -1)//will keep asking user to enter a song until -1 is typed
		{
			playTwo.push_back(songVector.at(songSelect));
			cout <<"Choose another song to add.Type (-1) when done: ";
			cin >> songSelect;
			if(songSelect > 9)
			{
				cout << "Too high! " ;
			}
		}
		cout <<"Playlist "<< playlist2 <<" has been created" << endl; //shows that the playlist was created
	}

	else if(playlist3 == " ") //3rd playlist
	{
		playlist3 = playlistName;//sets whatever name u choose
		cout << "Name Created: " << playlist3 << endl;
		cout << "Choose 5 songs to add onto playlist"<< endl;

		//displays all the songs
		for( i = 0; i < songVector.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << songVector.at(i).getSongName()<< endl;
		}

		//Allows user the select any song from the playlist
		cout <<"Choose another song to add: ";
		cin >> songSelect;
		while(songSelect != -1)//will keep asking user to enter a song until -1 is typed
		{
			playThree.push_back(songVector.at(songSelect));
			cout << "Choose another song to add.Type (-1) when done: ";
			cin >> songSelect;
			if(songSelect > 9)
			{
				cout << "Too high! " ;
			}
		}

		cout <<"Playlist "<< playlist3 <<" has been created" << endl;//shows that the playlist was created
	}

	else if(playlist4 == " ") //4th playlist
	{
		playlist4 = playlistName;//sets whatever name u choose
		cout << "Name Created: " << playlist4 <<endl;
		cout << "Choose 5 songs to add onto playlist" << endl;

		//displays all the songs
		for( i = 0; i < songVector.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << songVector.at(i).getSongName()<< endl;
		}

		//Allows user the select any song from the playlist
		cout << "Choose a song to add: ";
		cin >> songSelect;
		while(songSelect != -1)//will keep asking user to enter a song until -1 is typed
		{
			playFour.push_back(songVector.at(songSelect));
			cout << "Choose another song to add.Type (-1) when done: ";
			cin >> songSelect;
			if(songSelect > 9)
			{
				cout << "Too high! " ;
			}
		}

		cout <<"Playlist "<< playlist4 <<" has been created" << endl;//shows that the playlist was created
	}
}

void display(vector<Song> songVector,vector<Song>& playOne,vector<Song>& playTwo,vector<Song>& playThree,
		vector<Song>& playFour, string& playlist1 , string& playlist2, string& playlist3, string& playlist4)
{
	cout<< "Play Available: " << endl;
	cout <<"Master Playlist"<< " MP" <<"\n" << "(1)" <<playlist1<< "\n" <<"(2)" << playlist2 << "\n" <<"(3)" << playlist3 << "\n" <<"(4)" << playlist4 <<"\n" << endl;
	cout << "Open Playlist: " << endl;
	cin >> displayInput;

	//displays all the songs in the master playlist
	if(displayInput == "MP")
	{
		for( i = 0; i < songVector.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << songVector.at(i).getSongName()<< endl;
		}
	}

	//displays all the songs the user wanted to put into playlist 1
	else if(displayInput == playlist1)
	{
		for( i = 0; i < playOne.size(); ++i)
		{
			cout << "("<< i << ")" << "  : " << playOne.at(i).getSongName()<< endl;
		}
	}

	//displays all the songs the user wanted to put into playlist 2
	else if(displayInput == playlist2)
	{
		for( i = 0; i < playTwo.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << playTwo.at(i).getSongName()<< endl;
		}
	}

	//displays all the songs the user wanted to put into playlist 3
	else if(displayInput == playlist3)
	{
		for( i = 0; i < playThree.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << playThree.at(i).getSongName()<< endl;
		}
	}

	//displays all the songs the user wanted to put into playlist 4
	else if(displayInput == playlist4)
	{
		for( i = 0; i < playFour.size(); i++)
		{
			cout << "("<< i << ")" << "  : " << playFour.at(i).getSongName()<< endl;
		}
	}
	else
	{
		cout << "There's no play named that" << endl; //error message if the playlist name is incorrect
	}
	cout << '\n' << endl;
}

void play1(vector<Song> songVector)
{
	//displays the all the songs
	cout << '\n' << "Song Menu :" << '\n';
	cout << endl;

	for( i = 0; i < songVector.size(); i++)
	{

		cout << "("<< i << ")" << "  : " << songVector.at(i).getSongName()<< endl;
	}
	cout << "("<< i << ")" << " : " << "Quit"<< endl;

	cout << "Select => " << endl;//asks user to pick from menu
	cin >> option;
	if(option == 10){
		cout << "Bye. Program Terminated"<<endl;
	}
	//when a user chooses a song the name and artist appear and the url open to the song
	if(option >= 0 && option <=songVector.size() ){

		songVector.at(option).DisplaySongInfo();
		temp = songVector.at(option).getSongURL();

		//Create Command Line & Call it
		command = "start chrome -window-size-700,650 " + temp;
		const char *system_command = command.c_str();
		system(system_command);

		//Closes the browser window to continue
		cout << "\nClose the browser window to continue, then ..." << endl;
		system("pause");
		cin.ignore();
	}
	else{
		cout << "Invalid choice. Choose again"<< endl;//error message if the choice is incorrect
	}

}

void play2(vector<Song> songVector,vector<Song> &playOne,vector<Song> &playTwo,vector<Song> &playThree,
		vector<Song> &playFour, string &playlist1 , string &playlist2, string &playlist3, string &playlist4)
{
	cout << "Master Playlist" <<"\n" << "(1)" << playlist1 << "\n" <<"(2)" << playlist2 << "\n" <<"(3)" << playlist3 << "\n" <<"(4)" << playlist4 <<"\n" << endl;
	cout << "Choose a playlist to listen to: ";
	cin >> playlistSelect;

	//If the user wants the master playlist to play all of it song's
	if(playlistSelect == "Master Playlist")
	{
		for( x = 0; x < songVector.size(); x++)
		{
			songVector.at(x).DisplaySongInfo();

			//Create Command Line & Call it
			command = "start chrome -window-size-700,650 " + songVector.at(x).getSongURL();
			const char *system_command = command.c_str();
			system(system_command);

			//Closes the browser window to continue
			cout << "\nClose the browser window to continue, then ..." << endl;
			system("pause");
			cin.ignore();
		}
	}

	//If the user wants the 1st playlist to play all of it song's
	else if(playlistSelect == playlist1)
	{
		for( x = 0; x < playOne.size(); x++)
		{
			playOne.at(x).DisplaySongInfo();

			//Create Command Line & Call it
			command = "start chrome -window-size-700,650 " + playOne.at(x).getSongURL();
			const char *system_command = command.c_str();
			system(system_command);

			//Closes the browser window to continue
			cout << "\nClose the browser window to continue, then ..." << endl;
			system("pause");
			cin.ignore();
		}
	}

	//If the user wants the 2nd playlist to play all of it song's
	else if(playlistSelect == playlist2)
	{
		for( x = 0; x < playTwo.size(); x++)
		{
			playTwo.at(x).DisplaySongInfo();

			//Create Command Line & Call it
			command = "start chrome -window-size-700,650 " + playTwo.at(x).getSongURL();
			const char *system_command = command.c_str();
			system(system_command);

			//Closes the browser window to continue
			cout << "\nClose the browser window to continue, then ..." << endl;
			system("pause");
			cin.ignore();
		}
	}

	//If the user wants the 3rd playlist to play all of it song's
	else if(playlistSelect == playlist3)
	{
		for( x = 0; x < playThree.size(); x++)
		{
			playThree.at(x).DisplaySongInfo();

			//Create Command Line & Call it
			command = "start chrome -window-size-700,650 " + playThree.at(x).getSongURL();
			const char *system_command = command.c_str();
			system(system_command);

			//Closes the browser window to continue
			cout << "\nClose the browser window to continue, then ..." << endl;
			system("pause");
			cin.ignore();
		}
	}

	//If the user wants the 4th playlist to play all of it song's
	else if(playlistSelect == playlist4)
	{
		for( x = 0; x < playFour.size(); x++)
		{
			playFour.at(x).DisplaySongInfo();

			//Create Command Line & Call it
			command = "start chrome -window-size-700,650 " + playFour.at(x).getSongURL();
			const char *system_command = command.c_str();
			system(system_command);

			//Closes the browser window to continue
			cout << "\nClose the browser window to continue, then ..." << endl;
			system("pause");
			cin.ignore();
		}
	}
	else{
		cout << "Couldn't play playlist typed in" << endl; //error message if the playlist name is incorrect
	}
}

void del(vector<Song>& playOne,vector<Song>& playTwo,vector<Song>& playThree,
		vector<Song>& playFour, string& playlist1 , string& playlist2, string& playlist3, string& playlist4)
{
	cout << "(1)" <<playlist1<< "\n" <<"(2)" << playlist2 << "\n" <<"(3)" << playlist3 << "\n" <<"(4)" << playlist4 <<"\n" << endl;
	cout << "Delete Playlist: ";
	cin >> deleteInput;

	//If the user wants to delete the 1st playlist
	if(deleteInput == playlist1)
	{
		playOne.erase( playOne.begin() , playOne.begin() + playOne.size() );
		playlist1 = " ";
		cout << "Playlist " << playlist1 << " has been deleted" << endl;
	}

	//If the user wants to delete the 2nd playlist
	else if(deleteInput == playlist2)
	{
		playTwo.erase( playTwo.begin() , playTwo.begin() + playTwo.size());
		playlist2 = " ";
		cout << "Playlist 2 has been deleted" << endl;
	}

	//If the user wants to delete the 3rd playlist
	else if(deleteInput == playlist3)
	{
		playThree.erase( playThree.begin() , playThree.begin() + playThree.size());
		playlist3 = " ";
		cout << "Playlist 3 has been deleted" << endl;
	}

	//If the user wants to delete the 4th playlist
	else if(deleteInput == playlist4)
	{
		playFour.erase( playFour.begin() , playFour.begin() + playFour.size());
		playlist4 = " ";
		cout << "Playlist 4 has been deleted" << endl;
	}
	else
	{
		cout << "There's no play named that to delete" << endl; //error message if the playlist name is incorrect
	}
}

void quit(vector<Song> &playOne,vector<Song> &playTwo,vector<Song> &playThree,
		vector<Song> &playFour, string &playlist1 , string &playlist2, string &playlist3, string &playlist4)
{
	ofstream outFile("created_play_list.txt");

	outFile << playlist1 << ":" << endl;
	//throws the 1st playlist in the file
	for(i = 0; i < playOne.size(); i++)
	{
		outFile << playOne.at(i).getSongName() << endl;
		outFile << playOne.at(i).getSongArtist() << endl;
		outFile << playOne.at(i).getSongURL() << endl;
	}
	outFile << endl;
	outFile << playlist2 << ":" << endl;

	//throws the 2nd playlist in the file
	for(i = 0; i < playTwo.size(); i++)
	{
		outFile << playTwo.at(i).getSongName() << endl;
		outFile << playTwo.at(i).getSongArtist() << endl;
		outFile << playTwo.at(i).getSongURL() << endl;
	}
	outFile << endl;
	outFile << playlist3 << ":" << endl;

	//throws the 3rd playlist in the file
	for(i = 0; i < playThree.size(); i++)
	{
		outFile << playThree.at(i).getSongName() << endl;
		outFile << playThree.at(i).getSongArtist() << endl;
		outFile << playThree.at(i).getSongURL() << endl;
	}
	outFile << endl;
	outFile << playlist4 << ":" << endl;

	//throws the 4th playlist in the file
	for(i = 0; i < playFour.size(); i++)
	{
		outFile << playFour.at(i).getSongName() << endl;
		outFile << playFour.at(i).getSongArtist() << endl;
		outFile << playFour.at(i).getSongURL() << endl;
	}
	outFile.close(); //closing the created_play_list file
	cout << "Bye" << endl;
}


