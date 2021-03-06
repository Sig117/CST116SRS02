// Part 0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"

int main()
{
	std::cout.imbue(std::locale("en-US"));
	std::cout.setf(std::ios::right);

		double W = 36364.87F ;
		double M( 12431.33F );
		double E( 127690.50F );
		double S( 9200.00F );
		std::cout << std::right << std::setw(10) << "West: " << std::setw(2) << std::right <<  " $ " << std::setw(10) << std::fixed << std::setprecision (2) << std::right << W << std::endl
			<< std::right << std::setw(10) << "Midwest: " << std::setw(2) << std::right <<" $ " << std::setw(10) << std::fixed << std::setprecision(2) << std::right << M << std::endl
			<< std::right << std::setw(10) << "East: " << std::setw(2) << std::right <<" $ " << std::setw(10) << std::fixed << std::setprecision(2) << std::right << E << std::endl
			<< std::right << std::setw(10) << "South: " << std::setw(2) << std::right << " $ " << std::setw(10) << std::fixed << std::setprecision(2) << std::right << S << std::endl;
	
    return 0;
}

