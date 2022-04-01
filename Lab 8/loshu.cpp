#include <iostream>
using namespace std; 

// Function Prototype 
  int collect_values(int[][3],int); 
  bool is_Lo_Shu_Magic_Square(int[][3],int);
  double sum_row(int[][3],int); 
  double sum_col(int[][3],int); 
  double sum_diagonal_lr(int[][3],int);
  double sum_diagonal_rl(int[][3],int); 

// ---------------------------------------------------------------------------------------------------------------------------

// Main Function 
  int main () {
    int square[3][3];
    char answer; 

    do {
     collect_values(square, 3);
     sum_row(square, 3); 
     sum_col(square, 3); 
     sum_diagonal_lr(square,3); 
     sum_diagonal_rl(square,3); 

     cout << "Play again... Y/N "; 
     cin >> answer; 

    } while (answer == 'Y' || answer == 'y');

    /*
      i (is_Lo_Shu_Magic_Square(square, 3)) {
          cout << "Congratulations, you entered a Lo Shu Magic Square!" << endl;
      } else {
          cout << "\nSorry, the values you entered do not form a Lo Shu Magic Square." << endl;
        }
    */
     
      is_Lo_Shu_Magic_Square(square,3); 
  }

// --------------------------------------------------------------------------------------------------------------------------

// Collect Values Function
  int collect_values(int square[][3], int rows) {

    // Defining Variables 
      int row,
          col;  
      
    // Collecting row data
    for (row = 0; row <  3; row++) {
      for (col = 0; col < 3; col++) {
        cout << "Please enter the number for row: " << (row + 1) << "," << (col + 1) << ".\n"; 
        cin >> square[row][col]; 
      } 
    }

    return 0; 
  }

// --------------------------------------------------------------------------------------------------------------------------

  double sum_row(int square[][3], int rows) {
    
    // Defining Variables 
      int row,
          col; 

      double total_row; 

      //Calculating the total in each row 
        for (row = 0; row < 3; row++) {
          total_row = 0; 
          for(col = 0; col < 3; col++) {
            total_row += square[row][col];  
          }  
            cout << "\nTotal for row " << (row + 1) << " = " << total_row << endl; 
        }
        return total_row; 
  }

// -----------------------------------------------------------------------------------------------------------------------

  double sum_col(int square[][3], int rows) {

    // Defining Variables 
      int row,
          col; 

      double total_col; 

    // Calculating the total in each column 
      for (col = 0; col < 3; col++) {
        total_col = 0;
        for (row = 0; row < 3; row++) {
          total_col += square[row][col]; 
        }
          cout << "\nTotal for col " << (col + 1) << " = " << total_col << endl; 
      } 
      return total_col; 
  }

// ---------------------------------------------------------------------------------------------------------------------

  double sum_diagonal_lr(int square[][3], int rows) {
    
    // Defining Variables 
      int i; 

      double total_diagonal_lr; 

    // Calculating the total in the LEFT to RIGHT Diagonal 
      total_diagonal_lr = 0; 

      for (int i = 0; i < 3; i++) {
        total_diagonal_lr += square[i][i]; 
      }
        cout << "\nTotal for diagonal left to right = " << total_diagonal_lr << endl; 

      return total_diagonal_lr; 
  }

// -----------------------------------------------------------------------------------------------------------------------

  double sum_diagonal_rl(int square[][3], int rows) {
    
    // Defining Variables 
      int i; 

      double total_diagonal_rl; 

    // Calculating the total in the RIGHT to LEFT
      total_diagonal_rl = 0; 

      for (int i = 0; i < 3; i++) {
        total_diagonal_rl += square[i][i]; 
      }
        cout << "\nTotal for diagonal right to left = " << total_diagonal_rl << endl; 

      return total_diagonal_rl; 
  }

// ----------------------------------------------------------------------------------------------------------------------

  bool is_Lo_Shu_Magic_Square(int square[][3], int rows) {
    if (sum_row(square,3) == sum_col(square,3) == sum_diagonal_lr(square,3) == sum_diagonal_rl(square,3)) {
      cout << "Congratulations, you entered a Lo Shu Magic Square!" << endl;
      return true; 
    } else {
      cout << "\nSorry, the values you entered do not form a Lo Shu Magic Square." << endl;
      return false; 
      }
  }
