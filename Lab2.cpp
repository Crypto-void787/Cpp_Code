// Program using while loop 

#include<iostream>
using namespace std; 
int main(){ 

     cout << "Program to calculate the average age of students using while loop " << endl; 
     cout << "\n___________Give age of 10 studetns_________________" << endl ;
     int age ; 
     int total_age; 
     int i  = 1 ; 
     
     while(i < 10){
         
           cout << "Enter the age of student " << i << " : "  ; 
           cin >> age ;
           total_age += age ; 
           i++ ; 
     }
       cout << "__________________________________________________________________" << endl; 
       cout << "\nThe average age of the students is : " << total_age/10 << endl ; 
    return 0 ;
}