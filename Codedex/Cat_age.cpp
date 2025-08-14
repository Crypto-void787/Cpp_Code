#include <iostream>
using namespace std; 

int main() {
  /*Have you wondered how old your cat is when they are older? Your furry friend might be cute and small, but they are older than you realize! 🐱

To put it into perspective: The first two cat years count as 24 human years (the first year = 15 human years, the second year = 9 human years).

Each additional cat year counts as 4 human years.*/ 

  cout << "Welcome to the Cat Years Program! This only work for cats older than 2 yrs old " << endl ;

  int cat_age ; 
  int human_yr ;  
  
  //Taking cat age from user 
  cout << "\nEnter your cat's age : " ; 
  cin >> cat_age ; 
  
  //Logic if cat yr greater than 2 fuck to the user  ☠️ 

  if(cat_age < 2)
  {
     cout << "\nSeems like u didnt read intructions carefully 🤔" << endl ;
     cout << "\nTry again! N its only for cat older than two 😒" << endl ;
  }
   else 
   {
      human_yr = ( cat_age - 2 ) * 4 + 24 ; 
       
       cout << "\nYour cat is " << human_yr << " years old in human years. " << endl ; 
   }
    
    return 0 ; 

}