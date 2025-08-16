 // This code demonstrate the use of while loop 
// throughout the code -- u'll asked to guess a number---- 

#include<iostream>
using namespace std ; 

int main()
{ 
   int num ; 

   cout << "Guess the number : " ; 
   cin >> num ; 
   
   while(num != 64)
   { 
     cout << "Guess again : " ;
     cin >> num ; 

     if(num >= 60 && num <= 70)
     {
        cout << "Closer . . . .!!" << endl ; 
     }

   }

   cout << "Finally you guessed " << num << "----> smart dude!!" << endl ; 

   return 0 ; 
} 

