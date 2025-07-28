
#include<iostream>
using namespace std;
 
void Display_diagnol(int col , int row){
    
     for(int i = 1 ; i <= row ; i++)
     {
           
         for (int j = 1 ; j <= col; j++ )
          {  
             if ( i == j )
              {
                 cout << i << " "; 
              } 
              else
              {
                 cout << "0 "  ; 
              }
             
          }
           cout  << endl ; 
     }
 }
int main(){
     int col ; 
     int row ; 

     cout << "Give number of column : " ; 
     cin >> col ; 
     
     cout << "\nGive number of rows : " ; 
     cin >> row ; 

     if(row == col ){ 
           
         cout << endl ;  
         cout << endl ; 
          
          cout << "Diagonal matrix of given values " << endl ; 

        Display_diagnol(col , row) ;
     }
     else{

         cout << "\nSorry! Number of rows and column are not the same " << endl ; 
     }
    return 0 ; 
} 


