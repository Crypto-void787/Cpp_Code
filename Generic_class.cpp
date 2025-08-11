 
//    This code covers the concept of template in terms of class 
 

 #include<iostream>
 using namespace std; 
  
    //making tempalte 
     template <class T>
   class Box
    { 
         T a ;  // Storing value same as we do in norma class like first to declare the variables n then ahead . . .

         public:
          
          Box(T a)
           {
               this->a = a ; 
           } 
          // making a getValue function to get value and to also store it 
           
           void GetValue()
            {
                 cout << "Your given input is represent as : " << a << endl ; 
            }
    }; 
     
    int main()
    {  
         //Setting the values 
         Box<int> b1(21) ; 
         Box<string> b2("Hello") ; 

         //Printing the value using getvalue function 
         b1.GetValue() ;
         b2.GetValue(); 

         return 0 ; 
    }