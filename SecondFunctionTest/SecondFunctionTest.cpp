// SecondFunctionTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//the number that the computer was thinking of.
int val()
{
	return 5;
}

//Gets user input and tells user what the computer was thinking.
int interact_w_console()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Whats your charictar bro: ";
	char response;
	cin >> response;
	cout << "Your response was " << response << endl;
	cout << "I was thinking of the number " << val()<< endl;
	return 0;
}

int main()
{
	interact_w_console();
    return 0;
}

