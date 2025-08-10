/* Friend function is used to play with private and protected members of any class  outside the class 
 but to do that we have to decalre that friend function function with in the class 
 and we'll pass the class name as parameter of that friend function */

 #include<iostream>
 using namespace std; 
  class Box 
  { 
     private:
        int length  ; 
     public: 
        friend int length_of_box(Box) ;      
  }; 
   
   int length_of_box(Box b)  //Declare the object at parameter 
    { 
        b.length = 10 ; 
        return b.length ; 
    }
    
 int main()
 {
     Box b ;  // Declaring our object 
      cout << "Length of the box b is  : " << length_of_box(b) << endl ;
      // knowing the length of the Box which is a private member by using friend function  
     return 0 ; 
 }
