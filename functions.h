/**************************************************************/
/* Title: functions.h										  */
/* Course: Computational Problem Solving CPET-II			  */
/* Date: 11/30/21											  */
/* Description:  Header file for the all of the functions	  */
/**************************************************************/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

void create(vector<Song>,vector<Song>&,vector<Song>&,vector<Song>&,vector<Song>&, string&, string&, string&, string&);

void display(vector<Song>,vector<Song>&,vector<Song>&,vector<Song>&,vector<Song>&, string&, string&, string&, string&);

void del(vector<Song>&,vector<Song>&,vector<Song>&,vector<Song>&, string&, string&, string&, string& );

void play1(vector<Song>);

void play2(vector<Song>,vector<Song>&,vector<Song>&,vector<Song>&,vector<Song>&, string&, string&, string&, string&);

void quit(vector<Song>&,vector<Song>&,vector<Song>&,vector<Song>&, string&, string&, string&, string& );





#endif /* FUNCTIONS_H_ */
