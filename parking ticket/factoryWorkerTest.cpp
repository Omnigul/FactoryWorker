#include <iostream>
#include "employee.h"

using namespace std;


int main()
{
    employee test;

    string testName;
    int testNum;
    int testDay;
    int testMonth;
    int testYear;

    test.setEmpName("Joe Dude");
    test.setEmpNum(12345);
    test.setEmpHireDate(3, 5, 2015);
    testName = test.getEmpName();
    testNum = test.getEmpNum();
    test.getHireDate(testDay, testMonth, testYear);
    test.showEmpData();

    cout << testName << endl << testNum << endl << testDay << "/" << testMonth << "/" << testYear << endl;
}