#pragma once

#include <iostream>

using namespace std;

class employee
{
public:
	// takes a string and assigns empName to it
	void setEmpName(string name);
	// takes a number and assigns empNum to it
	void setEmpNum(int number);
	// takes three ints and assigns the hireDay, hireMonth and hireYear to them. it validates the day based on month, 
	// the month to ensure it stays in range, and the year to check if it is after 1960(i just put it because it seems a reasonable cutoff)
	void setEmpHireDate(int month, int day, int year);
	// returns empName
	string getEmpName();
	//returns empNum
	int getEmpNum();
	// takes three inputs and assigns them to the same value as the private variables 
	void getHireDate(int& month, int& day, int& year);
	// outputs the variables in desired format
	void showEmpData();




private:
	string empName;
	int empNum;
	int hireDay;
	int hireMonth;
	int hireYear;
};