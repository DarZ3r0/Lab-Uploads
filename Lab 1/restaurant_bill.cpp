/* 
  1 SET mealCharge = 88.67
  
  2 SET taxRate = 0.0675 
  3 SET tipRate = 0.20

  4 SET totalTax = mealCharge * taxRate
  5 SET subtotal = mealCharge + totalTax
  
  6 SET totalTipPrice = subtotal * tipRate

  7 SET totalPrice = subtotal + totalTipPrice 

  8 PRINT "Meal Cost: $", mealCharge
  9 PRINT "Tax Amount: $", totalTax
  10 PRINT "Tip Amount: $", totalTipPrice
  11 PRINT "Total Bill: $", totalPrice
  12 STOP

  */

#include <iostream>
#include <iomanip>
using namespace std; 

  int main () {
  
  // Define Variables 

    double mealCharge = 88.67;
    double taxRate = 0.0675;
    double tipRate = 0.20;


    double totalTax; 
    double subtotal; 
    double totalTipPrice; 
    double totalPrice;


  // Define the algorithm

    totalTax = mealCharge * taxRate; 
    subtotal = mealCharge + totalTax;

    totalTipPrice = subtotal * tipRate; 

    totalPrice = subtotal + totalTipPrice; 

    cout << fixed << setprecision(2) << "Meal Cost: $" << mealCharge << endl; 
    cout << fixed << setprecision(2) << "Tax Amount: $" << totalTax << endl; 
    cout << fixed << setprecision(2) << "Tip Amount: $" << totalTipPrice << endl; 
    cout << fixed << setprecision(2) << "Total Bill: $" << totalPrice << endl; 

    return 0; 

}
