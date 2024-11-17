#include <iostream>
#include "shiftSupervisor.h"
#include <iomanip>

using namespace std;

void shiftSupervisor::setEmpName(string name)
{
	employee::setEmpName(name);
}

void shiftSupervisor::setEmpNum(int num)
{
	employee::setEmpNum(num);
}

void shiftSupervisor::setEmpHireDate(int month, int day, int year)
{
	employee::setEmpHireDate(month, day, year);
}

void shiftSupervisor::setSalary(double sal)
{
	if (sal > 30000)
	{
		salary = sal;
	}
	else if (sal < 0)
	{
		cout << "error: wrong input in setSalary" << endl; 
	}
}

void shiftSupervisor::setBonus(double bns)
{
	if (bns > 0)
	{
		bonus = bns;
	}
	else if (bns < 0)
	{
		cout << "Error: wrong input in setBonus" << endl;
	}
}

double shiftSupervisor::getSalary()
{
	return salary;
}

double shiftSupervisor::getBonus()
{
	return bonus;
}

void shiftSupervisor::showEmpData()
{
	employee::showEmpData();
	cout << fixed << setprecision(2) << "Annual Salary: $" << salary << endl << "Annual Bonus: $" << bonus << endl << endl;
}