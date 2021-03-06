// Timmer.cpp : Defines the entry point for the console application.
//
//Setting Up the Program 
#include "stdafx.h"
#include <iostream>
#include <chrono>

using namespace std; 

//Start of main function
int main()
{
	//Text to tell the user who uses this program that the clock has started 
	std::cout << "The is clock starts now\n";
	//Here we are using the variable Chrono to keep the time, and what the line below does is doing 
	// is subtractring the end time so in the case, the time after X amount of minutes and the time that it is now
	std::chrono::steady_clock::time_point tend = std::chrono::steady_clock::now()
		+ std::chrono::minutes(1);
	//Starting a while loop while the timmer is running 
	while (std::chrono::steady_clock::now() < tend)
	{
		
	}
	//Text that appears on program once the timer runs out 
	std::cout << "Times Up\n";
	//pauses program so it doesn't autimatcilly open 
	system("pause");
	return 0;
}

