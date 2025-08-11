
#include<iomanip>
#include<iostream>
using namespace std; 

ostream & curr(ostream & ostrObj)
{
     cout << fixed << setprecision(2); 
      cout << "Rs " ; 
     return ostrObj;      
}
 
 int main()
  { 
    float amt = 10.547; 
     cout << curr << amt ; 
     return 0 ; 
  }