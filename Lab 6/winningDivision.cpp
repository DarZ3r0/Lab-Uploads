#include <iostream>
using namespace std; 
#include <iomanip>
#include <string>

// Function Prototype 

  double getSales(string); 
  void findHighest(string, double, string, double, string, double, string, double); 

// Main Function 

  int main() {

    cout << "============================================================" << endl; 
    cout << "                   WINNING DIVISION SALES                   " << endl; 
    cout << "============================================================" << endl; 

// Defining Variables
    double northeast,
           southeast,
           northwest,
           southwest;

// Initialization of the Functions 
    northeast = getSales("NorthEast"); 
    southeast = getSales("SouthEast"); 
    northwest = getSales("NorthWest"); 
    southwest = getSales("SouthWest"); 

    findHighest("NorthEast", northeast, "SouthEast", southeast, "NorthWest", northwest, "SouthWest", southwest); 
}

// getSales Function

  double getSales(string divisionName) {
    double division_sales; 

    cout << divisionName << ": " << "Enter the division sales? "; 
    cin >> division_sales; 

// Error Check 

    while (division_sales < 0) {
      cout << "ERROR! Sales cannot be below $0.00";
      cout << "Enter the division sales? "; 
      cin >> division_sales; 
    }

  return division_sales; 
}

  void findHighest (string northeast, double northeast_sales, string southeast, double southeast_sales, string northwest, double northwest_sales, string southwest, double southwest_sales) {
   
// Northeast Conditionals 
    if (northeast_sales > southeast_sales && northeast_sales > northwest_sales && northeast_sales > southwest_sales) {
      cout << "\nThe Highest Grossing Division was the NorthEast Divisoin!" << endl; 
      cout << fixed << setprecision(2) << "NorthEast Sales = $" << northeast_sales << endl; 
  }
// SouthEast Conditionals
    else if (southeast_sales > northeast_sales && southeast_sales > northwest_sales && southeast_sales > southwest_sales) {
      cout << "\nThe Highest Grossing Division was the SouthEast Division!" << endl;
      cout << fixed << setprecision(2) << "SouthEast Sales = $" << southeast_sales << endl; 
  }
// NorthWest Conditionals 
    else if (northwest_sales > northeast_sales && northwest_sales > southeast_sales && northwest_sales > southwest_sales) {
      cout << "\nThe Highest Grossing Division was the NorthWest Division!" << endl; 
      cout << fixed << setprecision(2) << "NorthWest Sales = $" << northwest_sales << endl;  
  }
// SouthWest Conditionals 
    else if (southwest_sales > northeast_sales && southwest_sales > southeast_sales && southwest_sales > northwest_sales) {
      cout << "\nThe Highest Grossing Division was the SouthWest Division!" << endl; 
      cout << fixed << setprecision(2) << "SouthWest Sales = $" << southwest_sales << endl;  
  }

}
