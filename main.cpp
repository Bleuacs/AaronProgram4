//File: 	main.cpp
//Name: 	Aaron Slettebak
//Class: 	CSIS 252
//Program: 	assignment 4
//Date: 	10/8/2021


#include <iostream>
#include <string>
#include "horsepowerTWatts.h"
#include "horsepowerTWatts.cpp"


using namespace std;

//Program Description
// this is a tester file for horsepowerTWatts class files. This file will ask
// for a one input for the input method. other wise the program does most of the testing itself on most the the methods in horsepowerTWatts.

int main(){
	//setup
	float num = 5;
	horsepowerTWatts horse;
	horsepowerTWatts hp(num);

	//prints out the units for horsepower
	printHPowerN();

	//user input for testing the input
	horse.input();


	//prints out the unit and the convertion to watts
	hp.print();
	horse.print();

	//compairs the two class identifiers
	compair(hp.gethorsepower(), horse.gethorsepower());

	//set
	cout << "the horsepower for hp is change to '1' horsepower" << endl;
	hp.sethorsepower(1);

	//gets new 
	cout << "the watts get change by the set, using get to see this ";
	cout << hp.getWatts() <<  " Watts"<< endl;

	return 0;
}
