/*
  
  1 SET test1
  2 SET test2
  3 SET test3
  4 SET test4
  5 SET test5
  6 SET average
  7 SET sum

  8 PRINT "Please enter your 5 test scores: "

  9 PRINT "Test Score 1: "
  10 GET test1

  11 PRINT "Test Score 2: "
  12 GET test2

  13 PRINT "Test Score 3: "
  14 GET test3

  15 PRINT "Test Score 4: "
  16 GET test4

  17 PRINT "Test Score 5: "
  18 GET test5
  
  19 SET sum = test1 + test2 + test3 + test4 + test5
  20 SET average = sum / 5 

  21 PRINT "Your average test score is:  ", average
  22 STOP

  */


#include <iostream>
using namespace std; 
#include <iomanip>

  int main() {
    
  // Define the variables

    double test1; 
    double test2; 
    double test3; 
    double test4; 
    double test5; 
    double average;
    double sum; 

  // Asking for the test scores

    cout << "Please enter your 5 test scores: " << endl;
    
    cout << "\n Test Score 1: "; 
    cin >> test1; 

    cout << "\n Test Score 2: ";
    cin >> test2; 

    cout << "\n Test Score 3: "; 
    cin >> test3; 

    cout << "\n Test Score 4: "; 
    cin >> test4;

    cout << "\n Test Score 5: "; 
    cin >> test5; 
    
  // Calculating the average 
    
    sum = test1 + test2 + test3 + test4 + test5; 

    average = sum / 5; 

    cout << fixed << setprecision(1) << "\n Your average test score is: " << average << endl; 
}

