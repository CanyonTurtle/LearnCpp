// PrintWithParams.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//functon has one paramater.
void p(int toprint) {
	std::cout << toprint << std::endl;
}

int main()
{
	//passing 5 and 7 as arguements to p(). 
	//paramaters are assigned the values of arguements passed to the called function.
	//"arguements are values passed from the caller to the function."
	p(5);
	p(7);
    return 0;
}

