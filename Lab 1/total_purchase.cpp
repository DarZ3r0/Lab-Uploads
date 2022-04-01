/* 
    1 SET double item1 = 15.95
    2 SET double item2 = 24.95
    3 SET double item3 =  6.95
    4 SET double item4 = 12.95
    5 SET double item5 =  3.95

    6 SET salesTax = 0.07

    7 PRINT double item1 = 15.95
    8 PRINT double item2 = 24.95
    9 PRINT double item3 =  6.95
    10 PRINT double item4 = 12.95
    11 PRINT double item5 =  3.95

    12 subtotal = item1 + item2 + item3 + item4 + item5
    
    13 taxPrice = subtotal * salesTax

    14 totalPrice = subtotal + taxPrice

    15 STOP

*/

#include <iostream>
using namespace std; 
#include <iomanip>

  int main() {
    
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 =  6.95;
    double item4 = 12.95;
    double item5 =  3.95;


    double salesTax = 0.07;
    double subtotal; 
    double taxPrice; 
    double totalPrice;


    cout << "Price of Item 1: $" << item1 << endl; 
    cout << "Price of Item 2: $" << item2 << endl; 
    cout << "Price of Item 3: $" << item3 << endl; 
    cout << "Price of Item 4: $" << item4 << endl; 
    cout << "Price of Item 5: $" << item5 << "\n" << endl; 

    subtotal = item1 + item2 + item3 + item4 + item5; 

    taxPrice = subtotal * salesTax; 

    totalPrice = subtotal + taxPrice;

    cout << fixed << setprecision(2) << "Subtotal: $" << subtotal << endl; 
    cout << fixed << setprecision(2) << "Amount of Sales Tax: $" << taxPrice << endl; 
    cout << fixed << setprecision(2) << "Total Price: $" << totalPrice << endl; 
}
