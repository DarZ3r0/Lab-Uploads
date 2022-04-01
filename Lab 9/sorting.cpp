#include <iostream>
using namespace std; 
#include <random>

// Global Constants 
  const int MIN = 1; 
  const int MAX = 20;
  const int MAX_SIZE = 20; 

// Function Prototypes 
  int bubble_sort(int[],int); 
  int selection_sort(int[],int); 
  int random_generator(int,int); 
  void swap(int&,int&);
  void showArray(int[],int); 


// Main Function
  int main() {

  // Defining Variables
    int array_one[MAX_SIZE];
    int array_two[MAX_SIZE]; 
    int i; 
    int bubble_nums; 
    int selection_nums; 

  // Fill the Array with 20 Random Values 
    for (i = 0; i < MAX_SIZE; i++) {
      array_one[i] = random_generator(MIN,MAX);
      array_two[i] = array_one[i]; 
    }

  // Printing Array Values before Sorting 
      cout << "\n*************************************************" << endl; 
      cout << "           RANDOM REGULAR VALUES                 " << endl; 
      cout << "*************************************************\n" << endl; 

      showArray(array_one, MAX_SIZE); 

    // Sending Values to Bubble Sort from Array 1
      bubble_nums = bubble_sort(array_one, MAX_SIZE);

    // Displays Bubble Sorted Values  
      cout << "\n**********************************************" << endl; 
      cout << "               BUBBLE SORT VALUES             " << endl; 
      cout << "**********************************************\n" << endl; 

      showArray(array_one, MAX_SIZE);

    // Sending Values to Selection Sort 
      selection_nums = selection_sort(array_two, MAX_SIZE); 

    // Displays Selection Sorted Values 
      cout << "\n**********************************************" << endl; 
      cout << "               SELECTION SORT                   " << endl; 
      cout << "************************************************\n" << endl; 

      showArray(array_two,MAX_SIZE); 
      
  }
  
// Bubble Sort Function 
  int bubble_sort(int random[], int size) {
    
    // Initializing Variables 
      int maxElement; 
      int index; 

    // Bubble Sorting 
      for (maxElement = size - 1; maxElement > 0; maxElement--) {
        for (index = 0; index < maxElement; index++) {
          if (random[index] > random[index + 1]) {
            swap(random[index], random[index + 1]); 
          }
        }
      }
    return 0; 
  }

// Swap Function 
  void swap(int &a, int &b) {
    int temp = a; 
    a = b; 
    b = temp; 
}

// Random Generator 
  int random_generator(int min, int max) {
    
    // Making the Generator
      random_device engine; 

      uniform_int_distribution<int> randomInt(min,max); 

    return randomInt(engine); 
  }
  
// Show Array Function 
  void showArray(int nums[], int size) {

      for (int count = 0; count < MAX_SIZE;count++) {
        cout << nums[count] << endl;
      }
  }

// Selction Sort Function 
  int selection_sort(int random[], int size) {

    // Defining Variables 
      int minIndex; 
      int minValue;

    // Selection Sorting 
      for (int start = 0; start < (size - 1); start++) {
        minIndex = start; 
        minValue = random[start]; 
        for (int index = start + 1; index < size; index++) {
          if (random[index] < minValue) {
            minValue = random[index]; 
            minIndex = index; 
          }
        }
        swap(random[minIndex], random[start]); 
      }
    return 0;  
  }
