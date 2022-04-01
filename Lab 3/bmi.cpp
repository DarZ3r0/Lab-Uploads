/*

  1 SET weight; 
  2 SET BMI; 
  3 SET height; 

  4 PRINT "What is your weight (in pounds)? "
  5 GET weight

  6 PRINT "What is your height (in inches)? "
  7 GET height

  8 SET BMI = weight * 703 / pow(height,2)

  9 PRINT "Your BMI is ", BMI , " so..."

  10 if (BMI >= 18.5 && BMI <= 25) {
  11    PRINT "You have an optimal weight"
}
  12 if (BMI < 18.5) {
  13    PRINT "You are underweight"
}
  14 if (BMI > 25) {
  15    PRINT "You are overweight"
}
  16 STOP

  */


#include <iostream>
using namespace std; 
#include <iomanip>
#include <math.h>

  int main () {

  // Defining Variables 

    double weight; 
    double BMI; 
    double height; 

  // Title 

    cout << "----------------------------------" << endl; 
    cout << "               BMI                " << endl; 
    cout << "----------------------------------" << endl; 

  // Prompts

    cout << "What is your weight (in pounds)? "; 
    cin >> weight; 

    cout << "What is your height (in inches)? "; 
    cin >> height; 

  // Calculations 

    BMI = weight * 703 / pow(height, 2);
  

  // Your BMI

    cout << "\nYour BMI is " << BMI << " so..." << endl; 

  // Conditionals of users weight 

    if (BMI >= 18.5 && BMI <= 25) {
      cout << "\nYou have an optimal weight" << endl; 
  }
    if (BMI < 18.5) {
      cout << "\nYou are underweight" << endl; 
  }
    if (BMI > 25) {
      cout << "\nYou are overweight" << endl; 
  }

}
