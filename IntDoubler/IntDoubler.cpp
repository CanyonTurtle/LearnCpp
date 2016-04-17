// IntDoubler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//returns 2 times the integer arguement.
int Double(int a)
{
	return a + a;
}

//Gets and integer input from the user.
int Input()
{
	std::cout << "Enter an integer to double: ";
	int x;
	std::cin >> x;
	return x;
}

int main()
{
	int a = Double(Input());
	std::cout << "The resulting value is " << a << std::endl;
    return 0;
}

