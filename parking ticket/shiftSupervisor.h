#pragma once

#include <iostream>
#include "employee.h"
using namespace std;


class shiftSupervisor: employee
{
public:
	// runs the base version of setEmpName
	void setEmpName(string name);
	// runs the base version of setEmpNum 
	void setEmpNum(int num);
	//runs the base version of setEmpHireDate
	void setEmpHireDate(int month, int day, int year);
	// takes a double and sets salary to it
	void setSalary(double sal);
	// takes a double and sets bonus to it
	void setBonus(double bns);
	// returns salary as a double
	double getSalary();
	// returns bonus as a double
	double getBonus();
	// runs the base version of showEmpdata, then outputs the rest seperatly
	void showEmpData();
private:
	double salary;
	double bonus;
};