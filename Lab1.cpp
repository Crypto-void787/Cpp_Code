// Program to calculate average age of 10 students in a class 

#include<iostream> 
using namespace std;
int main(){

    //  Declaring variables  
     int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10 ; 
     int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10 ; 
    
     cout << "Enter age of student 1 : " ; 
     cin >> age1 ; 
      
     cout << "\nEnter age of student 2 : " ; 
     cin >> age2 ; 
 
      
     cout << "\nEnter age of student 3 : " ; 
     cin >> age3 ; 
 
      
     cout << "\nEnter age of student 4 : " ; 
     cin >> age4 ; 
 
      
     cout << "\nEnter age of student 5 : " ; 
     cin >> age5 ; 
 
      
     cout << "\nEnter age of student 6 : " ; 
     cin >> age6 ; 
 
      
     cout << "\nEnter age of student 7 : " ; 
     cin >> age7 ; 
 
      
     cout << "\nEnter age of student 8 : " ; 
     cin >> age8 ; 
 
      
     cout << "\nEnter age of student 9 : " ; 
     cin >> age9 ; 
 
      
     cout << "\nEnter age of student 10 : " ; 
     cin >> age10 ; 
      
      cout << "\n-------------------------------------------------" << endl ; 
 
    //  To calculate average age 

     int sum =  age1+ age2 + age3 + age4 + age5 + age6+ age7 + age8 + age9 + age10 ; 
    float avg = sum / 10  ; 
       
    
     cout << "The average age of this class is : " << avg << endl ; 
     
 
    return 0; 

}