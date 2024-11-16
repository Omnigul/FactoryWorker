#pragma once
 
#include <iostream>
#include "employee.h"

using namespace std;


class productionWorker: employee
{
public:
	void setShift(int shiftTime);
	void setPayRate(double rate);
	void setEmpName(string name);
	void setEmpNumber(int num);
	void setHireDate(int month, int day, int year);
	string getShift();
	double getPayRate();
	void showEmpData();

private:
	int shift;
	double payRate;
};