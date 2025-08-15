 
  // Arithmatic operator  (+ , - , / , * , % )
  // Relational operator (+= , -= , != , == , > , >= , < , <= ) 
  // Logical operator (& , | , ! )

  #include <iostream>
using namespace std;

int main() {
   
   int level ; 

   cout << "Tell your level to know in which league you are currently : " ; 
   cin >> level ; 

   if(level <= 5)
   { 
     cout << "\nBronze" ; 
   }
   else if(level >= 10) 
   { 
      cout << "\nSilver" ; 
   }
   else if(level >= 15)
   {
      cout << "\nPlatinum" ; 
   }
   else 
   { 
     cout << "\nDiamond " ; 
   }

   return 0 ; 
}

