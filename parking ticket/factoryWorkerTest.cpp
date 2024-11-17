#include <iostream>
#include "productionWorker.h"
#include "shiftSupervisor.h"

using namespace std;


int main()
{
    productionWorker testPW1;
    productionWorker testPW2;
    shiftSupervisor testSS;

    testPW1.setEmpName("Paul Jones");
    testPW1.setEmpNum(12345);
    testPW1.setEmpHireDate(10, 28, 2024);
    testPW1.setShift(1);
    testPW1.setPayRate(20.25);
    
    testPW1.showEmpData();
    
    testPW2.setEmpName("Harriet Smith");
    testPW2.setEmpNum(54321);
    testPW2.setEmpHireDate(6, 15, 2024);
    testPW2.setShift(2);
    testPW2.setPayRate(25.50);

    testPW2.showEmpData();
    
    testSS.setEmpName("Elmer Velasquez");
    testSS.setEmpNum(100325);
    testSS.setEmpHireDate(1, 17, 2024);
    testSS.setSalary(70000);
    testSS.setBonus(1000);
    
    testSS.showEmpData();


}