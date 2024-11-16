#pragma once
 
#include <iostream>
#include "employee.h"

using namespace std;


class productionWorker: employee
{
public:
	// takes an int and sets shift to it. validates by ensuring shift is 1 or 2
	void setShift(int shiftTime);
	// takes a double and sets payRate to it. validates by ensuring that it is above the minimum wage(12.41)
	void setPayRate(double rate);
	// runs the base version of setEmpName
	void setEmpName(string name);
	// runs the base version of setEmpNum 
	void setEmpNum(int num);
	//runs the base version of setEmpHireDate
	void setEmpHireDate(int month, int day, int year);
	//returns shift as day if it is one or night if 2
	string getShift();
	//returns payRate
	double getPayRate();
	//runs the base form of showEmpData, then outputs the rest seperatly
	void showEmpData();

private:
	int shift;
	double payRate;
};