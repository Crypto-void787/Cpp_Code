/*  Fortune Cookie is a small cookie wafer with a piece of paper inside, called a “fortune,” 
which is usually a Chinese phrase with translation and a list of lucky numbers. */

//  ---> So lets check your fortune buddy 

  #include<iostream>
  #include<cstdlib>
  #include<ctime>
  using namespace std; 
 
   int main()
   { 
      srand(time(NULL)); // To get unique value each time 
       
      int Luck ; 
      Luck = rand() % 10 ;  
      
      // Applying logic over it 

      if(Luck == 0)
      {
           cout << "Power isn't given, it's coded into me." << endl ; 
      }

      else if(Luck == 1) 
      {
           cout << "I'm not here to fit in, I'm here to take over." << endl ; 
      }

      else if(Luck == 2) 
      {
           cout << "Be the person u wanna have when you are a kid." << endl ;
      }

      else if(Luck == 3) 
      {
           cout << "Focus like a sniper, work like a hacker." << endl ; 
      }

      else if(Luck == 4) 
      {  
          cout << "Fearless isn't a mood, it's my default setting." << endl ;  
      }

      else if(Luck == 5)
      {
           cout << "Patience is the companion of wisdom." << endl ; 
      }

      else if(Luck == 6)
      {
           cout << "Small steps every day lead to big changes." << endl ; 
      }

      else if(Luck == 7)
      {
            cout << "Learn something new every day" << endl ; 
      }

      else if(Luck == 8)
      {
            cout << "The journey matters more than the destination." << endl ; 
      }
      
      else  // else will be 9 obviously 
      {
            cout << "Focus on what truly matters." << endl ; 
      }


      return 0 ; 
   }