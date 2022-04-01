/* 
  
  Pseudocode for Sales Prediction Problem 
  
  1  SET totalSalesPercentage = 0.58
  2  SET yearlySale = 8600000

  3  SET eastCoastSales = yearlySale * totalSalesPercentage

  4 PRINT "East Coast Division Estimate Sales = ", eastCoastSales
  5 STOP

  */

#include <iostream>
using namespace std; 
#include <iomanip>

  int main() {
    
  // Define the variables 

  double totalSalesPercentage = 0.58;
  double yearlySale = 8600000;

  double eastCoastSales; 

  // Define the algorithm

  eastCoastSales = yearlySale * totalSalesPercentage; 

  // Final Answer 

  cout << fixed << setprecision(2) << "East Coast Sales Division Estimate Sales: $" << eastCoastSales << endl; 
  return 0; 
}



