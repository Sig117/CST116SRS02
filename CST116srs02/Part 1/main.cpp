// Part 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"

int main()
{
	std::cout.imbue(std::locale("en-US"));
	std::cout.setf(std::ios::scientific);
	double number ;

	std::cout << "Enter a number... ";
	
	std::cin >> number;

	std::cout << number ;

    return 0;
}

