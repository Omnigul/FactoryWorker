

#include <iostream>
#include "employee.h"
#include <iomanip>

using namespace std;


void employee::setEmpName(string name)
{
	empName = name;
}

void employee::setEmpNum(int number)
{
	if (number > 9999)
	{
		empNum = number;
	}
	else
	{
		cout << "error: invalid employee number: setEmpNum" << endl;
	}
}

void employee::setEmpHireDate(int month, int day, int year)
{
	switch (month)
	{
	case 1:
		if (0 < day <= 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 2:
		if (0 < day <= 28)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 3:
		if (0 < day < 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 4:
		if (0 < day <= 30)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 5: 
		if (0 < day <= 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 6:
		if (0 < day <= 30)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 7:
		if (0 < day <= 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 8:
		if (0 < day <= 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 9:
		if (0 < day <= 30)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 10:
		if (0 < day < 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 11:
		if (0 < day < 30)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	case 12:
		if (0 < day <= 31)
		{
			hireDay = day;
			hireMonth = month;
			break;
		}
		else
		{
			cout << "error: invalid day: setEmpHireDate" << endl;
		}
	default:
		cout << "error: invalid month: setEmpHireDate" << endl;
	}
		
		
	
	if (1960 < year <= 2024)
	{
		hireYear = year;
	}
	else
	{
		cout << "error: invalid year: setEmpHireDate" << endl;
	}
}

string employee::getEmpName()
{
	return empName;
}

int employee::getEmpNum()
{
	return empNum;
}

void employee::getHireDate(int& month, int& day, int& year)
{
	day = hireDay;
	month = hireMonth;
	year = hireYear;
}

void employee::showEmpData()
{
	cout << fixed << setprecision(2) << "Name: " << empName << endl << "Employee Number: " << empNum << endl
		<< "Hire Date: " << hireMonth << "/" << hireDay << "/" << hireYear << endl;
}