//File: 	horsepowerTWatts.cpp
//Name: 	Aaron Slettebak
//Class: 	CSIS 252
//Program: 	assignment 4
//Date: 	10/8/2021


#include "horsepowerTWatts.h"

//class start ups
horsepowerTWatts::horsepowerTWatts(){
	Horsepower = 0;
	Watts = 0;
}

horsepowerTWatts::horsepowerTWatts(float horsepower){
	Horsepower = horsepower;
	Watts = horsepower * 745.7;
}

//settings for the class
void horsepowerTWatts::sethorsepower(float horsepower){
	Horsepower = horsepower;
	Watts = horsepower * 745.7;
}

//getters for the class
float horsepowerTWatts::gethorsepower(){
	return Horsepower;
}

float horsepowerTWatts::getWatts(){
	return Watts;
}
		
//prints out the horsepower and the watts convertion of it
void horsepowerTWatts::print(){
	cout << fixed << setprecision(2) << Horsepower << " horsepower is " << Watts << " Watts" << endl;
}

//prints out the horsepower units
void printHPowerN(){
	cout << "horsepower, Hp" << endl;
}
//prints out the watts units
void printWattsN(){
	cout << "Watts, W" << endl;
}

//compairs the two horsepowers of different
void compair(float one, float two){
	if(one == two){
		cout << one << "equal" << two << endl;
	}else if(one > two){
		cout << one << ">" << two << endl;
	}else{
		cout << one << "<" << two << endl;
	}
}

//gets input
void horsepowerTWatts::input(){
	string inputs;
	string str;
	string tmparr[2];
	int num =0;
	cout << "Please enter a number and the unit for it: ";
	getline(cin, inputs);
	for(auto x:inputs){
		if(x==' '){
			//puts the unit in the unit array
			tmparr[num] ={str};
			str.erase();
			num = 1;
		} else {
			str=str+x;
		}
	}
	tmparr[num] ={str};
	//checks
	checkInput(tmparr[0], tmparr[1]);
}

// check to see input is a horse power unit if so sets it and prints it out 
// as so else prints out that the unit is not.
void horsepowerTWatts::checkInput(string number, string unit){
	//settups
	string units[2] = {"horsepower", "hp"};
	float num = stof(number);
	int check = 1;
	string unitTmp = unit;
	transform(unit.begin(), unit.end(), unit.begin(), ::tolower);
	//checks to see if the unit is a horsepower
	for(int i=0; i < 2; i++){
		if(unit == units[i]){
			check = 0;
		} 
	}
	//what it is all for
	if(check == 0){
		//if is horsepower unit
		cout << number << " " << unitTmp << endl;
		sethorsepower(num);
	} else {
		// if not horse power unit
		cout << unitTmp << " is not horsepower" << endl;
	}

}

