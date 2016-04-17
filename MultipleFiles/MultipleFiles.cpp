// MultipleFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//returns the sum of 2 int arguements.
int add(int x, int y);

int main()
{
	int x, y;
	std::cin >> x;
	std::cin >> y;
	std::cout << add(x, y) << std::endl;
    return 0;
}

