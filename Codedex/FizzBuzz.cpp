  // Here's the catch:

// For multiples of 3, print "Fizz" instead of the number.
// For multiples of 5, print "Buzz" instead of the number.
// Here's the tricky part: For multiples of 3 and 5, print "FizzBuzz".

#include<iostream>
using namespace std ; 

int main()
{
     for(int i = 0 ; i <= 100 ; i++)
     {
         if(i % 3 == 0 && i % 5 == 0)  //if the number is multiple of both 3 and 5 
         {
            cout << "FizzBuzz" << endl ;
         }
         else if(i % 3 == 0)  // if number is only multiple of 3 print fizz
         {
            cout << "Fizz" << endl ; 
          }
          else if(i % 5 == 0) // if number is multiple of 5 print buzz
          {
             cout << "Buzz" << endl ; 
          }
          else // else just print the number 
          {
             cout << i << endl ; 
          }

     }
     return 0 ; 
}