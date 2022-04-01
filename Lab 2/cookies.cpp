/*

  1 SET cookies = 48
  2 SET sugar = 1.5
  3 SET butter = 1; 
  4 SET flour = 2.75

  5 SET num_cookies
  6 SET total_butter
  7 SET total_sugar
  8 SET total_flour
  
  9 PRINT "How many cookies would you like to make? "
  10 GET num_cookies

  11 total_sugar = (sugar * num_cookies) / cookies
  12 total_flour = (flour * num_cookies) / cookies
  13 total_butter = (butter * num_cookies) / cookies

  14 PRINT "To make ", num_cookies, " cookies"
  15 PRINT "You will need: "
  16 PRINT total_sugar, " cups of sugar"
  17 PRINT total_flour, " cups of flour"
  18 PRINT total_butter, " cups of butter"
  19 STOP

  */


#include <iostream>
using namespace std; 
#include <iomanip>

  int main () {
    
    int cookies = 48;
    double sugar = 1.5; 
    double butter = 1; 
    double flour = 2.75;

    double num_cookies; 
    double total_butter; 
    double total_sugar; 
    double total_flour; 
     

    // Question
    cout << "How many cookies would you like to make? "; 
    cin >> num_cookies; 

    // Calculate the ingredients 
    total_sugar = (sugar * num_cookies) / cookies; 
    total_flour = (flour * num_cookies) / cookies; 
    total_butter = (butter * num_cookies) / cookies; 

    // The amount of ingredients
    cout << "\n To make " << num_cookies << " cookies" << endl; 
    cout << "You will need: \n"; 
    cout << fixed << setprecision(2) << total_sugar << " cups of sugar\n";  
    cout << fixed << setprecision(2) << total_flour << " cups of flour\n"; 
    cout << fixed << setprecision(2) << total_butter << " cups of butter" << endl;

    return 0; 



    
}
