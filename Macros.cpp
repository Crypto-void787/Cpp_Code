#include<iostream>
using namespace std; 

// If we pass two parameters in this macro n then we call it in our main finction the first value will be accurate
//  But the next value inc two time its the nature of the macros 
 
#define square(x) ((x)*(x));
#define PI 3.14 

int main(){
     int radius = 5 ; 
       cout << "Area of the circle is :  " << PI * radius*radius ;  
     int x ;
     cout << "\nEnter the value of x  : " ; 
     cin >> x ; 
     cout << "The square of x is : " << square(x)  ;    
     cout << "\nThe square of x is : " << square(x+2) ; 
     cout << "\nThe square of x is : " << square(x*2) ; 
        
     

    return 0 ; 
}