#include <iostream>
#include "teamLeader.h"
#include <iomanip>
using namespace std;

void teamLeader::setEmpName(string name)
{
	productionWorker::setEmpName(name);
}

void teamLeader::setEmpNum(int num)
{
	productionWorker::setEmpNum(num);
}

void teamLeader::setEmpHireDate(int month, int day, int year)
{
	productionWorker::setEmpHireDate(month, day, year);
}

void teamLeader::setPayRate(double rate)
{
	productionWorker::setPayRate(rate);
}

void teamLeader::setShift(int shiftTime)
{
	productionWorker::setShift(shiftTime);
}

void teamLeader::setMonthBonus(double mntBns)
{
	if (mntBns > 0)
	{
		monthBonus = mntBns;
	}
	else if (mntBns < 0)
	{
		cout << "Error: wrong input in setMonthBonus" << endl;
	}
}

void teamLeader::setTrainHourR(int hoursR)
{
	if (hoursR > 0)
	{
		hourNeed = hoursR;
	}
	else
	{
		cout << "Error: wrong input in setTrainHourR" << endl;
	}
}

void teamLeader::setTrainHourH(int hourH)
{
	if (hourH > 0)
	{
		hourGot = hourH;
	}
	else
	{
		cout << "error: wrong input in setTrainHourH" << endl;
	}
}

double teamLeader::getMonthBonus()
{
	return monthBonus;
}

int teamLeader::getTrainHoursR()
{
	return hourNeed;
}

int teamLeader::getTrainHoursH()
{
	return hourGot;
}

void teamLeader::showEmpData()
{
	productionWorker::showEmpData();
	cout << fixed << setprecision(2) << "Monthly Bonus: $" << endl;
	cout << "Required Training Hours: " << hourNeed << endl << "Attended Training Hours: " << hourGot << endl;
}