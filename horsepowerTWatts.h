//File: 	horsepowerTWatts.h
//Name: 	Aaron Slettebak
//Class: 	CSIS 252
//Program: 	assignment 4
//Date: 	10/8/2021

#ifndef HORSEPOWERTWATTS_H
#define HORSEPOWERTWATTS_H
#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>


using namespace std;

class horsepowerTWatts{
	private:
		float Horsepower;
		float Watts;
	public:
		horsepowerTWatts();
		horsepowerTWatts(float);
		//set and gets
		void sethorsepower(float);
		float gethorsepower();
		float getWatts();
		//inputs and outputs	
		void input();
		void checkInput(string, string);
		//prints
		void print();
		void printHPowerN();
		void printWattsN();
		//compairs two floats from different classes horsepower
		void compair(float, float);
};

#endif
