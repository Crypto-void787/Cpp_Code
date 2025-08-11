#include<iostream>
using namespace std; 
 
 void Diagonal_matrix(int row , int col) 
   {
       for(int i = 0 ; i < row ; i++ )
       {  
          
         for(int j = 0 ; j < col ; j++ ) 
         {
              if (i == j ) 
              {
                cout << i << " " ; 
              }
              else 
              {
                 cout << "0 " ;   
              }
         }
          cout << endl ;
       }
   }
int main(){ 
      
     int row ; 
    int col ; 
      
    //Taking number of rows and coloumn from user 
     cout << "Enter number of rows : " ; 
     cin >> row ; 
     cout << "\nEnter number of column : " ; 
      cin >> col ;
       
      //Applying logic 
     if (row==col)
     { 
         cout << endl ; 
         cout << endl ; 
          cout << "The matrix is given as : " << endl ; 

         Diagonal_matrix(row , col) ; 

     } 
    else 
    {
         cout << "Make sure number of rows and columns should same " << endl ;  
    }
    return 0 ;
}