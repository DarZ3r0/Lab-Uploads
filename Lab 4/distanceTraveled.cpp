/*
  1 SET distance
  2 SET speed
  3 SET time 
  4 SET totalTime

  5 PRINT "What is the speed of your vehicle (in mph)? "
  6 GET speed

  7 PRINT "What is the hours traveled? "
  8 GET totalTime

  9   LOOP  while (speed < 0 || time < 0) {
  10  PRINT "Error! Please try again..."
  11  PRINT "What is the speed of your vehicle (in mph)? "
  12  GET speed
  13  PRINT "What is the hours traveled? "
  14  GET totalTime

  15  PRINT "Hour Distance Traveled"
  16  PRINT "----------------------------"
  17  LOOP while (time <= totalTime) {
  18  SET     distance = speed * time
  19  SET     time++
  
  20 PRINT time, "             ", distance
  21 STOP

  }
}

*/
  
#include <iostream>
using namespace std; 
#include <iomanip>

  int main () {

  // Defining Variables 

    double distance;
    double speed; 
    double time; 
    double totalTime; 

  // Prompts

    cout << "What is the speed of your vehicle (in mph)? "; 
    cin >> speed; 

    cout << "What is the hours travelled? "; 
    cin >> totalTime; 

  // Error Statement 

    while (speed < 0 || time < 0) {
      cout << "Error! Please try again..."; 

      cout << "\nWhat is the speed of your vehicle (in mph)? "; 
      cin >> speed; 

      cout << "\nWhat is the hours travelled? "; 
      cin >> totalTime; 
  }

   // Output 

    cout << "Hour Distance Traveled" << endl; 
    cout << "-------------------------------" << endl; 

    
    for (time = 1; time <= totalTime; time++) {
        
      distance = speed * time; 

      cout << time << "           " << distance << endl; 
  }
}
