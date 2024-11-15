

#include <iostream>
#include "employee.h"

using namespace std;


void employee::setEmpName(string name)
{
	empName = name;
}

void employee::setEmpNum(int number)
{
	empNum = number;
}

void employee::setEmpHireDate(int day, int month, int year)
{
	hireDay = day;
	hireMonth = month;
	hireYear = year;
}

string employee::getEmpName()
{
	return empName;
}

int employee::getEmpNum()
{
	return empNum;
}

void employee::getHireDate(int& day, int& month, int& year)
{
	day = hireDay;
	month = hireMonth;
	year = hireYear;
}

void employee::showEmpData()
{
	cout << "Name: " << empName << endl << "Employee Number: " << empNum << endl 
		<< "Hire Date: " << hireDay << "/" << hireMonth << "/" << hireYear << endl;
}