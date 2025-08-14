 
  
#include <iostream>
using namespace std;

int main() {  
      
     
     //Making calculator 

     int num1 ; 
     int num2 ;
     char a;
      
     cout << "Enter values with operation " << endl ;

     cin >> num1 ; 
      cin >> a ;  // taking this as operator between numbers 
     cin >> num2 ;  
      
     cout << "---------------------------" << endl ; 
     if(a == '+') 
     {
         cout << num1 + num2 << endl ; 
     }
      
     if(a == '-') 
     {
         cout << num1 - num2 << endl ; 
     }
      
     if(a == '*') 
     {
         cout << num1 * num2 << endl ; 
     }
      
     if(a == '/') 
     {
         cout << num1 / num2 << endl ; 
     }
 
     
    //  int cost_price ; 
    //  int selling_price ; 

    //   cout << "Enter the cost price : " ; 
    //   cin >> cost_price ; 
       
    //   cout << "Enter the selling price : " ; 
    //   cin >> selling_price ; 
       
    //   if(selling_price > cost_price) 
    //   { 
    //      cout << "You are on track " << endl ; 
    //   } 
    //   else if(selling_price < cost_price)
    //   {
    //       cout << "Your cost prices are high ... Business getting down " << endl ; 
    //   }
      
    //  //program to check either given number is even or odd 
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num % 2 == 0)
    //  {
    //     cout << num << " is Even." << endl;
    //   } 
    // else
    //  {
    //     cout << num << " is Odd." << endl;
    //  }

    return 0;
}
 

