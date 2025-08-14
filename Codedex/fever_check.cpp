#include <iostream>
using namespace std; 

int main() {

  // C++ program that checks if a person has a fever based on their temperature.

  int temp ; 
  double celsius ; 
 

  //Taking temperature from user 

  cout << "Give your current body temperature (Make sure its in Fahrenheit): " ; 
  cin >> temp ; 

    celsius = (temp - 32) / 1.8 ; 

  //Applying logic 

  if(temp > 100)
  { 
     cout << "You've Fever 🤒" << endl ;
   
     cout << "\nCurrent temperature is : " << celsius << " take care of you!!" << endl; 
 
  } 
  else 
  { 
    cout << "You dont have fever.  " << celsius << ". . Stop pretending buddy😒" << endl ; 
  }
  return 0 ;   
  
}
