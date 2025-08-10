// This keyword used to direct toward the original variable

#include<iostream>
using namespace std ; 
 
 class Books
 {
   private: 

     string type ; 
    
   public: 
     int id ; 
     string name ; 
     char available ; 
      
     Books(int id , string name , char available , string type)
     { 
         this->name = name ; 
         this->id = id ; 
         this->available = available ; 
         this->type = type ;  
          
         cout << "Data : " << id << "  " << name << " " << available << " " << type << endl ; 
         
     }      

 }; 
  
 int main()
  {
     Books b(1234 , "Two lovers" , 'y' , "Romantic") ; 
     
     return 0 ; 
  }