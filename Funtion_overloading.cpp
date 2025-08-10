 
  
//   Using multiple functions with same name and work  but different number of parameters is function overloading 

 #include<iostream>
 using namespace std ; 
   
//  Making multiple functions with same names and work but different no of parameters 
    int sum(int a , int b )
     {
         return a+b ; 
     }
    int sum(int a , int b, int c) 
     {
         return a+b+c ; 
     }
    int sum(int a , int b , int c , int d  )
     {
         return a+b+c+d; 
     }  
     
     void value( float a)
     { 
        cout << "1- Void values as float :  " << a  << endl ; 
     }
    
     void value( char a)
     { 
        cout << "2- Void values as char :  " << a   << endl ; 
     }
     void value( int a)
     { 
        cout << "3- Void values as int :  " << a << endl ; 
     }
     void value( double a)
     { 
        cout << "4- Void values as double :  " << a  << endl ; 
     }
    
    //  Now in which manner we give our value they will adjust themselve in which they suite the most 
 int main()
  {
    //    Now they'll go to their buddies by themselves 

      cout << sum(23 , 45) << endl ; 
      cout << sum(45, 56, 28 ) << endl ;
      cout << sum(9, 7, 4, 2 ) << endl ; 
       
       value(2) ; 
       value('v') ; 
       value(3.14) ; 
       value(3.55555) ;
      
     

    //  int a , b , c ; 
    //  float c ;
      
    //   cout << "Enter value of  int a :" ; 
    //   cin >> a ; 
    //   cout << "Enter value of  int b :" ; 
    //   cin >> b ; 
    //   cout << "Enter value of  int c:" ; 
    //   cin >> c  ; 

     return 0 ; 
  }