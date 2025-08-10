
#include<iostream>
using namespace std; 
 
 #define MAX(A,B) ((A) > (B) ? (A) : (B) ) 
  /*Defining the macro which comapre the value nothing else huh */ 

 inline int max(int a , int b )
  { 
      if ( a > b ) 
       return a ; 
       return b ; 
  }
//   Declaring a function doing same work as MAcro just aa a function 
 
int main(){
      
     int i ; 
     int x ; 
     int y ; 
      
    //   testing macro's work or implementation :
       
     x = 34 ; 
     y= 45 ; 

     cout << "BEFORE :  x = " << x << "  y =  " << y << endl ; 

     i = MAX(x++, y++) ; 
      cout << "AFTER : x = " << x << "  y = " << y << endl ; 
    //    Here it will first value by incrementing 1 but 2nd value it'll become dump like it'll not iuncrement as we wanna 


     x = 78 ; 
     y = 90 ; 
      
       cout << "BEFORE :  x = " << x << "  y =  " << y << endl ; 

      i = max(x++ , y++ ) ; 
       cout << "AFTER : x = " << x << "  y =  " << y << endl ; 
    //    Here it'll use an inline function as describe above so it'll work properly as incrementing our value nicely 

      
    return 0 ; 
}