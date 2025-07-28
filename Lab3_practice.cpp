#include<iostream>
using namespace std; 

 void Diagonal_display(int rows , int cols ){
          
      for(int i = 1 ; i <= rows ; i++ )
      {
          
           for(int j = 0 ; j <= cols ; j++ )
           {
               if( i == j ) 
               {
                   cout << i << " "  ;
               } 
            else 
              {
                 cout << "0 " ; 
              }
             
           }
            cout << " \n " ; 
      } 
 }
int main(){ 
    int rows ; 
    int cols ; 
     
     cout << "Enter the Row number  :  " ; 
     cin >> rows ; 
     
     cout << "Enter the column number  : " ;
     cin >> cols ; 
      
     if(rows == cols )
    {
       cout << "Diagonal matrix representation " << endl ; 
        Diagonal_display(rows , cols ); 
         
    } 
       else 
    { 
        cout << "Sorry dude! Rows and column are not same 😒" << endl ; 
    } 
      
    return 0 ;
}