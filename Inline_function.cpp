/*When we call a function the compiler takes some time to run it 
Meanwhile when we r doing simple calculations like additions multipilication we make our function inline 
To make a fiunction an inline function we use "Inline keyword" Just put inline before finction and next 
moment its an inline function */

/*if our function containing loop or goto values orr its a returning function then we shouldn't use an 
inline function or if our function have static values or if its a recursive function then we cant use an 
inline function */ 

 
#include<iostream>
using namespace std; 

//  Making an inline function
  
 inline int sum(int a, int b){ 
    return a+b ; 
 }
//  An inline function run as small or minor thing on lower levels like it takes less time then as a normal one 

int main(){
      int a ; 
      int b ; 

    //   Taking values from user 
       cout << "enter the value of a : " ; 
       cin >> a ; 
       cout << "enter the value of b : " ; 
       cin >> b ; 

        //  Displaying sum of given values using inline function 
          
      cout << "Then sum of " << a << " and " << b << " is : " << sum(a,b) ; 

    return 0; 

}