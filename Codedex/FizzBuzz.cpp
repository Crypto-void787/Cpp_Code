  // Here's the catch:

// For multiples of 3, print "Fizz" instead of the number.
// For multiples of 5, print "Buzz" instead of the number.
// Here's the tricky part: For multiples of 3 and 5, print "FizzBuzz".

#include<iostream>
using namespace std; 
int main()
{ 
     for(int i = 1 ; i <=100 ; i++)
     {
         if( i % 3 == 0 && i % 5 == 0)  //if i is multiple of both 3  and 5 give fizz buzz
         {
             cout << "FizzBuzz" << endl ; 
         }
         else if( i % 3 == 0)  // if i is only multiple of 3 give fizz
         { 
            cout << "Fizz" << endl ; 
         }
         else if( i % 5 == 0) // if i is only multiple of 5 give buzz
         {
             cout << "Buzz" << endl ; 
         }
         else   // else just print i 
         {
             cout << i << endl ; 
         }
         
     }

     return 0 ; 
}