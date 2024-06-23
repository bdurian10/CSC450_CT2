/*
*CT2.cpp
* Created by:Braden Durian
*Jun 23, 2024
*2:21:44 PM
*/
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
//Function Prototype

int main()
{
	for(int i = 0; i < 3; i++)
	{
		std::string string1; //use std::string to reduce vulnerabilities associated with C-strings
		cout << "Enter your first string" << endl;
		getline(cin, string1); //get user input for first string
		std::string string2;
		cout << "Enter your second string" << endl;
		getline(cin, string2); //get user input for second string
		std::string fullString = string1 + " " + string2; //concatenate strings
		cout << "Your strings, concatenated, are: " + fullString << endl;
		cout << endl; //print a space between iterations
	}
	cout << "Press any key to terminate the program" << endl;
	_getch(); //wait for user input to terminate
	return 0;
}

