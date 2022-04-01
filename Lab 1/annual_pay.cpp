/* 
  
  1 SET payAmount = 2200.0
  2 SET payPeriods = 26 
  3 SET annualPay = payAmount * payPeriods

  4 PRINT annualPay
  5 STOP 
  
  */

#include <iostream>
using namespace std; 
#include <iomanip>

  int main() {

    double payAmount = 2200.0; 
    double payPeriods = 26.0; 
    double annualPay; 

    annualPay = payAmount * payPeriods; 

    cout << "Total Pay: $" << annualPay << endl; 
}
