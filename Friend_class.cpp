/* Class that is used to access the private n protected members outside class 
 -----> We can say same as that of friend function */ 
  
  #include<iostream>
  using namespace std;
    
   class Examp_A 
    { 
         int x = 101 ; //By default its private variable
          
          friend class Examp_B ;  //Declaring the friend class 
       
    }; 
     
    class Examp_B 
     { 
         public: 
         //Making a function using that friend class 
           void Print_var(Examp_A a) 
           { 

             cout << "The value of x is : " << a.x << endl; 

           } 
            
     }; 
       
    int main() 
    {
         
         Examp_A a ; 
         Examp_B b ; 
         b.Print_var(a); 
        //   Using class B's object to display the private member of class A by using friend function 

         return 0 ; 
    }
    