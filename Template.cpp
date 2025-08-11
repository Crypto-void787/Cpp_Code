//  Template is basically a blueprint or formula for creating a generic class or a function 
// To simply put u can create a single func or a single class to work with different data types using template 
// C++ tempelate also known as generic class or function a powerful feature in cpp 

 #include<iostream>
 using namespace std;
   
   
  class Lovers 
 { 
     public:
      int a ; 
      Lovers(int a)
      {
         this->a = a ; 
         cout << a  ;     
      }
       
      //Creating a template ---> basically it automatically convert is data-type according to value 
      template <class K>
      //another constructor using template
      Lovers(K a)
      {
         //Here this K will auto convert it self into other datatype like if we give a string input then it'll act as string n others. . . 
         cout << a  ; 

      }

 }; 

 int main()
 { 
     cout << "\n*******************************" << endl ;  
     Lovers L1(2) ; // Using class original constructor
     cout << "\n*******************************" << endl ;  
     Lovers L2("two") ; // using template constructor 
      cout << "\n*******************************" << endl ;  

    return 0 ;     
 }