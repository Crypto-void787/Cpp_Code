#include <iostream>
using namespace std; 

int main() {
  // Write code here
  
  double MoM ; 
  double month2 ;
  double month1 ; 
 
  //Taking input or pricing of current month 
   cout << "Enter the prices of current month : " ; 
   cin >> month2 ; 
  
  
  //Taking input or pricing of previous month 
   cout << "\nEnter the pricing of previous month : ";
   cin >> month1 ;  
   
   
   // Applying lopgic of MoM 
   MoM = ((month2 - month1) / month1) * 100 ;  

  cout << "____________________________________" << endl ; 
    
   cout << "\n|So the Data analysis shows the output as : " << MoM  << "|" << endl ; 

   return 0 ; 

}