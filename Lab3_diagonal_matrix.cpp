//M gonna make matrix using nested loops and a function-----!! stay tuned ! 

#include<iostream>
using namespace std; 

 
 void Diagonal_display(int row , int col)
 {
    for(int i = 0 ; i < row ; i++) 
    { 
        for(int j = 0 ; j < col ; j++)
        { 
            if(row==col)
            { 
                cout << i << " " ; 
            }
            else 
             { 
                cout << "0 " ; 
             }

        }
    }
     
 } 
  
int main()
{    
     int row ; 
     int col ; 
     
     cout <<"Enter the number of rows : " ; 
     cin >> row ; 
     cout << "\nEnter the number of columns : " ; 
     cin >> col; 
     
     if(row==col)
     {
          cout << endl; 
          cout << endl; 
          
          cout << "The diagonal matrix of given numbers is follow as : " << endl ;
         
          Diagonal_display(row,col) ; 
           
     }
     else 
     {
         cout << "Make sure number of rows and column are same ---- !! " << endl ;
     }
     return 0  ; 

}