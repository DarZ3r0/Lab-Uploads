/*

  1 SET num 
  2 SET i = 1
  3 SET sum = 0 

  4 PRINT "Please enter a positive integer: "
  5 GET num

  6 LOOP while (num < 0) {
  7         PRINT "Error! Please try again..."
  8         PRINT "Please enter a positive integer: "
  9         GET num

  10 LOOP while (i <= num) {
  11 SET sum = sum + i 
  12 SET i++
  }

  13 PRINT "Your sum is ", sum
  14 STOP
}

*/



#include <iostream>
using namespace std; 
#include <iomanip>

  int main () {

  // Defining Variables 

    int num; 
    int i = 1;
    int sum = 0; 

  // Prompt

    cout << "Please enter a positive integer: "; 
    cin >> num; 

  // If Statement
  
    while (num < 0) {
      cout << "Error! Please try again..."; 

      cout << "\n\nPlease enter a positive integer: "; 
      cin >> num; 
  }
   
  // Statement
  
    while (i <= num) {
      sum = sum + i; 
      i++; 
       
  }
    cout << "Your sum is " << sum << endl;  
}
