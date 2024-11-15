#pragma once

#include <iostream>

using namespace std;

class employee
{
public:
	void setEmpName(string name);
	void setEmpNum(int number);
	void setEmpHireDate(int day, int month, int year);
	string getEmpName();
	int getEmpNum();
	void getHireDate(int& day, int& month, int& year);
	void showEmpData();



private:
	string empName;
	int empNum;
	int hireDay;
	int hireMonth;
	int hireYear;
};