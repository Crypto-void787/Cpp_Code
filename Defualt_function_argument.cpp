#include<iostream>
using namespace std; 
  
  void show(int x , float y )
  { 
     cout << "value of x : " << x << endl ; 
     cout << "value of y : " << y << endl ; 
  }
//   In this case i didnt set any value for the parameters by default bu in next fuunction m gonna set them 
//  N with tha default parameters i dont need to pass arguments in main function ehile running that function 

 void show2(int x= 6 , float y = 6.7 ) 
  {
      cout << "the value of x is : " << x << endl ;  
      cout << "the value of y is : " << y << endl ;   
  }
int main(){
     
     show(2, 4.5) ; 
      show2() ; 
      show2( 5 , 1.7) ; // i can modify it too 
     
    return 0 ; 
}