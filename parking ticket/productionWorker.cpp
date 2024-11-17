#include <iostream>
#include "productionWorker.h"
#include <iomanip>

using namespace std;


void productionWorker::setShift(int shiftTime)
{
	if (1 <= shiftTime <= 2)
	{
		shift = shiftTime;
	}
	else
	{
		cout << "error: wrong input in setShiftTime" << endl;
	}
}

void productionWorker::setPayRate(double rate)
{
	if (rate > 12.41)
	{
		payRate = rate;
	}
	else
	{
		cout << "error: wrong input in setPayRate" << endl;
	}
}

string productionWorker::getShift()
{
	if (shift = 1)
	{
		return "day";
	}
	else if (shift = 2)
	{
		return "night";
	}
	else
	{
		cout << "error: wrong output in getShift" << endl;
	}
}

double productionWorker::getPayRate()
{
	return payRate;
}

void productionWorker::showEmpData()
{
	string tempShift;
	switch (shift)
	{
	case 1:
		tempShift = "Day";
		break;
	case 2:
		tempShift = "Night";
		break;
	}
	
	employee::showEmpData();
	cout << fixed << setprecision(2) << "Shift: " << tempShift << endl << "Hourly Pay Rate: $" << payRate << endl << endl;
}

void productionWorker::setEmpName(string name)
{
	employee::setEmpName(name);
}

void productionWorker::setEmpNum(int num)
{
	employee::setEmpNum(num);
}

void productionWorker::setEmpHireDate(int month, int day, int year)
{
	employee::setEmpHireDate(month, day, year);
}