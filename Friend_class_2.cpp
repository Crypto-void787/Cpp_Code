
 #include<iostream>
 using namespace std;
  

    class Readers 
     {
         string name = "Ali" ; 
          int id = 12345 ; 

         public: 
           
          // Declaring its friend class now 
           friend class Books ; 
     };
     
    class Books 
     { 
         public: 
          void display(Readers b)
           { 
             cout << "The top book reader award goes to : " << b.name << endl ; 
           }
            
           void award(Readers c) 
            {
                 cout << "The top book award goes to : " << c.name << endl; 
            }
             // We can make unlimited object now using that private members of other class via friend class 
          
      
     }; 
  int main()
   { 
      Readers a ; 
      Books b ; 
      Books c ; 
      b.display(a); 
      c.award(a) ; 

     return 0 ; 
   } 