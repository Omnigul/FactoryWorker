#pragma once

#include <iostream>
#include "productionWorker.h"

using namespace std;

class teamLeader : productionWorker
{
public:
	// runs the base version of set shift
	void setShift(int shiftTime);
	// sets the base version of setPayRate
	void setPayRate(double rate);
	// runs the base version of setEmpName
	void setEmpName(string name);
	// runs the base version of setEmpNum 
	void setEmpNum(int num);
	//runs the base version of setEmpHireDate
	void setEmpHireDate(int month, int day, int year);
	// takes a double and sets monthBonus to it
	void setMonthBonus(double MntBns);
	// takes an int and sets hoursNeed to it
	void setTrainHourR(int hoursR);
	// takes an in and sets hoursGot to it
	void setTrainHourH(int hoursH);
	// returns the value of monthBonus
	double getMonthBonus();
	// returns the value of hoursNeed
	int getTrainHoursR();
	// returns the value of hoursGot
	int getTrainHoursH();
	// runs the base version of showEmpData, then outputs the rest of the data after
	void showEmpData();
private:
	double monthBonus;
	int hourNeed;
	int hourGot;
};