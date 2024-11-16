#include <iostream>
#include "productionWorker.h"

using namespace std;


int main()
{
    productionWorker testPW1; 
    productionWorker testPW2; 
     
    testPW1.setEmpName("Paul Jones"); 
    testPW1.setEmpNum(12345);
    testPW1.setHireDate(10, 28, 2024); 
    testPW1.setShift(1);
    testPW1.setPayRate(20.25);

    testPW2.setEmpName("Harriet Smith"); 
    testPW2.setEmpNum(54321);  
    testPW2.setHireDate(6, 15, 2024);  
    testPW2.setShift(2); 
    testPW2.setPayRate(25.50);  

    testPW1.showEmpData(); 
    testPW2.showEmpData(); 
}