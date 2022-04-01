#include <iostream>
using namespace std; 

int main () {

  // Defining Variables

    int num; 
    int columns; 
    int rows; 

  // Prompt 

    cout << "Please enter the number of rows and columns: "; 
    cin >> num; 

  // Printing 

    for (rows = 0; rows < num; rows++) {
      for (columns = 0; columns < num; columns++) {
        if (rows == 0) {
          cout << "*"; 
        } else if (rows == num - 1) {
            cout << "*"; 
        } else if (columns == 0) {
            cout << "*"; 
        }
          else if (columns == num - 1) {
            cout << "*"; 
        } else {
            cout << " "; 
        }
      } 
      cout << endl; 
    }
      cout << endl; 

}
