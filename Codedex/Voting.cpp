#include <iostream>
using namespace std; 

int main() 
{
   int age ; 
   char citizenship ; 
   char registration ;
   bool citizen ; 
   bool registerd ; 

   cout << "Enter your age : " ;
   cin >> age ; 

   cout << "\nAre you citizen of Pakistan (Y / N) : " ; 
   cin >> citizenship ;
   citizen = (citizenship == 'Y' || citizenship == 'y') ;

   cout << "\nAre you registered (Y / N) : " ; 
   cin >> registration ; 
   registerd = (registration == 'Y' || registration == 'y') ; 

   if(age >= 18 , citizen , registerd)
   {
      cout << "Yoo! you can vote " ; 
    }

    else if(age < 18)
    {
       cout << "You're not olf enough to vote! " ; 
    }
    else if(!citizen)
    {
       cout << "You are not eligible to vote. " ;  
    }
    else if(!registerd) 
    {
      cout << "You need to register first. " ; 
    }
    else 
    {
       cout << "Requirements didn't meet! SORRY " ; 
    }

   return 0 ; 
  
  
}
