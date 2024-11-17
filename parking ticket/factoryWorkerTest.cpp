#include <iostream>
#include "productionWorker.h"
#include "shiftSupervisor.h"
#include "teamLeader.h"

using namespace std;


int main()
{
    productionWorker testPW1;
    productionWorker testPW2;
    shiftSupervisor testSS;
    teamLeader testTL;

    cout << "Production Workers:" << endl << endl;

    testPW1.setEmpName("Paul Jones");
    testPW1.setEmpNum(12345);
    testPW1.setEmpHireDate(10, 28, 2024);
    testPW1.setShift(1);
    testPW1.setPayRate(20.25);
    
    testPW1.showEmpData();
    cout << endl;

    testPW2.setEmpName("Harriet Smith");
    testPW2.setEmpNum(54321);
    testPW2.setEmpHireDate(6, 15, 2024);
    testPW2.setShift(2);
    testPW2.setPayRate(25.50);

    testPW2.showEmpData();
   
    cout << endl << "Shift Supervisor:" << endl << endl;

    testSS.setEmpName("Elmer Velasquez");
    testSS.setEmpNum(100325);
    testSS.setEmpHireDate(1, 17, 2024);
    testSS.setSalary(70000);
    testSS.setBonus(1000);
    
    testSS.showEmpData();

    cout << endl << "Team Leader:" << endl << endl;

    testTL.setEmpName("Mike Rogers");
    testTL.setEmpNum(64327);
    testTL.setEmpHireDate(2, 7, 2024);
    testTL.setShift(2);
    testTL.setPayRate(25.50);
    testTL.setMonthBonus(150.00);
    testTL.setTrainHourR(20);
    testTL.setTrainHourH(10);

    testTL.showEmpData();
    
}