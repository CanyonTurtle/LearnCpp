// AddTwoNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//returns an input from the user.0
int getValFromUser()
{
	std::cout << "Enter a number: ";
	int a = 0;
	std::cin >> a;
	return a;
}


int main()
{
	int x = getValFromUser();
	int y = getValFromUser();
	std::cout << "the sum of " << x << " and " << y << " is " << x + y << std::endl;
    return 0;
}

