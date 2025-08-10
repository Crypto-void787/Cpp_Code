#include<iostream>
using namespace std; 
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