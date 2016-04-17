// FIbb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//returns the evaluation of the fibbonaci sequence up to the term of the given arguement.
int Fib(int a)
{
	if (a == 0)
		return 0;
	if (a == 1)
		return 1;
	return (Fib(a - 1) + Fib(a - 2));
}

int main()
{
	int x = 0;
	std::cin >> x;
	std::cout << Fib(x) << std::endl;
    return 0;
}

