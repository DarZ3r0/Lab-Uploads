#include <iostream> 
using namespace std; 
#include <iomanip>
#include <fstream>
#include <math.h>
#include <string>


// Main Function 
  int main() {

    cout << "==============================================================" << endl;  
    cout << "-                  THE BUMPKINS OF BUMPUS                    -" << endl;  
    cout << "==============================================================" << endl;  

    // Defining Variables
      int numBump, 
          numDoor, 
          doorIndex, 
          bumpIndex;
      
      double b, d; 

      string name;
      
      char startUnit,
           startUnit2; 


    // Opening the Input file 
      ifstream myfile;
      myfile.open("bumpkin_data.txt");

    // Error Check to make sure that the file opens 
    if (!myfile) {
      cout << "Could not open file" << endl; 
    }
      
    // Naming the file 
      myfile >> numBump;
      
    // Loops to Count the Bumpkin Index
    for (bumpIndex = 1; bumpIndex <= numBump; bumpIndex++) {
      myfile >> name >> numDoor >> b >> startUnit; 

      /*
        Print Contents of the input file 
          cout << name << " " << numDoor << " " << b << " " << startUnit << endl;
        Print the Door Height and Starting Unit for the first bumpkin
          cout << "Door Height: " << d << " " << "Start Unit: " << startUnit << endl; 
        Print the Bumpkin Height
          cout << "b value -> " << b << endl;
      */

      /*

      Legend to Understand the Conversion Functions 
        i = inches 
        f = feet 
        y = yards 
        c = centimeters 
        m = meters

        b = Height of Bumpkin
        d = Door Height 

    */

      // Bumpkin Height Conversions 
        if (startUnit == 'i') {
          b = b * 2.52;   
        } else if (startUnit == 'f') {
            b = b * 12 * 2.52; 
          } else if (startUnit == 'y') {
              b = b * 3 * 12 * 2.52;
            } else if (startUnit == 'm') {
                b = b * 100;
              }
    // Name of the Bumpkin 
              cout << "\n" << name << endl; 

    // Loops to Count the Door Index
    for (doorIndex = 1; doorIndex <= numDoor; doorIndex++) {
      myfile >> d >> startUnit2;
      //cout <<"Door Height: " << d 
      //     << " StartUnit2 Value: " << startUnit2 << endl;
      
      // Door Height Conversions 
      if (startUnit2 == 'i') {
          d = d * 2.52;   
        } else if (startUnit2 == 'f') {
            d = d * 12 * 2.52; 
          } else if (startUnit2 == 'y') {
              d = d * 3 * 12 * 2.52;
            } else if (startUnit2 == 'm') {
                d = d * 100;
              }

      // Print Door Height value 
        //cout << d << endl;

    // Initialization of dh
      double dh; 
      dh = (d/b); 

    // Door Height Travel Methods
      if (dh > 1.25) {
        cout << "Doorway " << doorIndex << ": Stilts" << endl; 
        //cout << dh << endl;  
      } else if (dh > 0.40 && dh <= 0.65) {
          cout << "Doorway " << doorIndex << ": Crawl" << endl; 
          //cout << dh << endl;  
        } else if (dh <= 1.05 && dh > 0.65) {
            cout << "Doorway " << doorIndex << ": Duck" << endl; 
            //cout << dh << endl; 
          } else if (dh > 1.05 && dh <= 1.25) {
              cout << "Doorway " << doorIndex << ": Walk" << endl; 
              //cout << dh << endl;  
            } else if (dh <= 0.40 && dh > 0.25) {
                cout << "Doorway " << doorIndex << ": Limbo" << endl; 
                //cout << dh << endl; 
              } else if (dh <= 0.25) {
                  cout << "Doorway " << doorIndex << ": Blocked" << endl; 
                  //cout << dh << endl;  
                } else {
                    cout << "Program has failed..." << endl; 
                  }
    }
  }
    return 0; 
}
