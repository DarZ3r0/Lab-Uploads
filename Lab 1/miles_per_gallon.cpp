/*
  
  1 SET gallons = 15
  2 SET miles = 375
  3 SET MPG
  
  4 MPG = miles / gallons

  5 PRINT "Number of Miles per Gallon: ", MPG
  6 STOP 

*/

#include <iostream>
using namespace std; 
#include <iomanip>

  
  int main() {

    double gallons = 15.0;
    double miles = 375;

    double MPG; 

    MPG = miles / gallons; 
    
    cout << "Number of Miles per Gallon: " << MPG << endl; 

    return 0; 
}
