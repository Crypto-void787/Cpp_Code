// A reference is an alias or an alternate name to an existing variable 
 
// dangling refrence is a reference to an object that is no longer exist 
 
#include<iostream>
using namespace std; 


 
 int main(){
  int a = 5 ; 
  int &j = a ; 
  cout << " a = " << a ; 
   cout << " &j = " << j ; 

   
    return 0 ; 
 }