// Program to calculate average age of 10 students in a class 

#include<iostream> 
using namespace std;
int main(){

      //   Now the same thing by using for loop 
       cout << "Calculating using for loop " << endl; 
    int age ; 
    int Total_age ;


    for(int i = 1 ; i < 10 ; i++ ) {
         
         cout << "Enter the age of student " << i << " : " ; 
         cin >> age ; 
         Total_age += age ; 
          
    }
     cout << "-----------------------------------" << endl ;
      cout << "The average age of students : " << Total_age / 10 << endl ; 
 
       cout << "___________________________________________________________________" << endl; 

    //  Declaring variables  
     
    cout << "Now by long length kids style code lol " << endl ;
    
     int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10 ; 
     int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10 ; 
    
     cout << "Enter age of student 1 : " ; 
     cin >> age1 ; 
      
     cout << "Enter age of student 2 : " ; 
     cin >> age2 ; 
 
      
     cout << "Enter age of student 3 : " ; 
     cin >> age3 ; 
 
      
     cout << "Enter age of student 4 : " ; 
     cin >> age4 ; 
 
      
     cout << "Enter age of student 5 : " ; 
     cin >> age5 ; 
 
      
     cout << "Enter age of student 6 : " ; 
     cin >> age6 ; 
 
      
     cout << "Enter age of student 7 : " ;  
     cin >> age7 ; 
 
      
     cout << "Enter age of student 8 : " ; 
     cin >> age8 ; 
 
      
     cout << "Enter age of student 9 : " ; 
     cin >> age9 ; 
 
      
     cout << "Enter age of student 10 : " ; 
     cin >> age10 ; 
      
      cout << "\n-------------------------------------------------" << endl ; 
 
    //  To calculate average age 

     int sum =  age1+ age2 + age3 + age4 + age5 + age6+ age7 + age8 + age9 + age10 ; 
    float avg = sum / 10  ; 
       
    
     cout << "The average age of this class is : " << avg << endl ; 
     cout << "_________________________________________________________________" << endl; 



    
    return 0; 

}