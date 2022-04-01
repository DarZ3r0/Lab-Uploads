/*

  1 SET pennies = 0.01
  2 SET nickels = 0.05
  3 SET dimes = 0.10
  4 SET quarters = 0.25
  5 SET numberOfCoins1
  6 SET numberOfCoins5
  7 SET numberOfCoins10
  8 SET numberOfCoins25
  9 SET totalPennies
  10 SET totalNickels
  11 SET totalDimes
  12 SET totalQuarters
  13 SET totalCoins

  14 PRINT "How many pennies do you want? "
  15 GET numberOfCoins1

  16 PRINT "How many nickels do you want? "
  17 GET numberOfCoins5

  18 PRINT "How many dimes do you want? "
  19 GET numberOfCoins10

  20 PRINT "How many quarters do you want? "
  21 GET numberOfCoins25

  22 SET totalPennies = pennies * numberOfCoins1
  23 SET totalNickels = nickels * numberOfCoins5
  24 SET totalDimes = dimes * numberOfCoins10
  25 SET totalQuarters = quarters * numberOfCoins25

  26 SET totalCoins = totalPennies + totalNickels + totalDimes + totalQuarters

  27 PRINT "Your total is: $", totalCoins

  28 if (totalCoins > 1.00) {
  29 PRINT "Error! This is more than $1.00"
}
  30 else if (totalCoins == 1.00) {
  31 PRINT "Congradulations! You have completed the game!"
}
  32 else if (totalCoins < 1.00) {
  33 PRINT "You have not fulfilled the $1.00 requirement. Please try again..."
}

  34 STOP

  */

#include <iostream>
using namespace std; 
#include <iomanip>

  int main () {

  // Define Variables 

    double pennies = 0.01 ; 
    double nickels = 0.05; 
    double dimes = 0.10; 
    double quarters = 0.25;
    int numberOfCoins1;
    int numberOfCoins5; 
    int numberOfCoins10; 
    int numberOfCoins25; 
    double totalPennies;
    double totalNickels; 
    double totalDimes; 
    double totalQuarters; 
    double totalCoins; 

  // Title

  cout << "---------------------------------------------" << endl; 
  cout << "           Change for a Dollar Game          " << endl; 
  cout << "---------------------------------------------" << endl; 
  
  // Prompts 

  cout << "How many pennis do you want? "; 
  cin >> numberOfCoins1; 

  cout << "How many nickels do you want? "; 
  cin >> numberOfCoins5;

  cout << "How many dimes do you want? "; 
  cin >> numberOfCoins10; 

  cout << "How many quarters do you want? "; 
  cin >> numberOfCoins25; 

  // Calculations 
  
  totalPennies = pennies * numberOfCoins1; 
  totalNickels = nickels * numberOfCoins5; 
  totalDimes = dimes * numberOfCoins10; 
  totalQuarters = quarters * numberOfCoins25; 

  totalCoins = totalPennies + totalNickels + totalDimes + totalQuarters; 

  // Final Output 

  cout << fixed << setprecision(2) << "\nYour total is: $" << totalCoins << endl; 
  // Conditionals 

  if (totalCoins > 1.00) {
    cout << "\nError! This is more than $1.00!" << endl; 
  }
  else if (totalCoins == 1.00) {
    cout << "\nCongradulations! You have completed the game!" << endl; 
  }
  else if (totalCoins < 1.00) {
    cout << "\nYou have not fulfilled the $1.00 requirement. Please try again..." << endl; 
  }


}
