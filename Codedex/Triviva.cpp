
// Random number (5 slots) 
//    -----> under each random number competitor will get different set of question 
//    -----> each set contains different questions 
//     ----> question will be in M.C.Q format (take answer from gamer) 
//      ---->  show score  ( false answer later) 
 


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std; 

int main()
{
    cout << "____________________________________________________" << endl ; 
    cout << "|       -----Welcome to triviva game-----           |" << endl ; 
    cout << "|              Rules for the game                   |" << endl ;
    cout << "|                                                   |" << endl ; 
    cout << "|   1- You can't reverse once done.                 |" << endl ; 
    cout << "|   2- You've to answer 5 M.C.Q based questions     |" << endl ; 
    cout << "|   3- You've to answer in a,b,c,d format           |" << endl ;  
    cout << "|                                                   |" << endl ; 
    cout << "|          YOO!!. . . LET'S DIVE IN                 |" << endl ; 
    cout << "|___________________________________________________|" << endl ; 
    cout << "              ()     " << endl ; 
    cout << "    (\\____/)  ()     " << endl ; 
    cout << "    ( *___*)  ()     " << endl ; 
    cout << "    (       づ        " << endl ;  

    string check ; // prompt user to proceed 

    cout << "\nStart the game ? ---> (Yes or No) ----> : " ;
    cin >> check ;

    if(check == "yes" || check == "Yes") 
    { 

    srand(time(NULL)) ;
    int slot = rand() % 5 ;  // Generate random quiz for gamer 
    // cout << slot ; 
   // Assigning quizes to each slot 
    
     cout << "________________________________________________"<< endl ;
     cout << "\nYou got slot #" << slot + 1 << "!\nKeep flexin' buddy " << endl ;
     cout << "________________________________________________"<< endl ;

   char a1, a2 , a3 , a4, a5 ;  // Will take input from user 
   int score = 0 ; 

   if(slot == 0) 
   {

     // Quiz : 

     cout << "Question 1 : \nWhat is the capital of Australia? " << endl ; 
     cout << "a) Sydney\nb) Canberra\nc) Melbourne\nd) Perth" << endl ;
     
     cout << "\nPlease write your answer : " ;
     cin >> a1 ; 

     if(a1 == 'b')
      {
         cout << "\nGreat job" << endl ; 

         score ++ ; // incrementing score 

      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
     // Quiz : 
     cout << "\n\nQuestion 2 : \nWhich planet is known as the Red Planet? " << endl ;
     cout << "a) Venus\nb) Mars \nc) Jupiter\nd) Saturn" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a2 ; 

     if(a2 == 'b')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz: 
     cout << "\n\nQuestion 3 : \nHow many continents are there on Earth?" << endl ; 
     cout << "a) 5\nb) 6\nc) 7 \nd) 8" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a3 ; 

     if(a3 == 'c')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz:
     cout << "\n\nQuestion 4 : \nWho sings Bad Guy?" << endl ; 
     cout << "a) Billie Eilish \nb) Ariana Grande\nc) Dua Lipa\nd) Taylor Swift" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a4 ; 

     if(a4 == 'a')
      {
         cout << "\nGreat job" << endl ;
          score ++;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }


     //Quiz: 

     cout << "\n\nQuestion 5 : \nWhat year was the first Avengers movie released? " << endl ; 
     cout << "a) 2010 \nb) 2011\nc) 2012\nd) 2013 " << endl ; 

     cout << "\nPlease write your answer : " ; 
     cin >> a5 ;
     
     if(a5 == 'c')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
       cout << "So your total score is : " << score << endl ; 
     }

   //For slot 2 

   else if(slot == 1)
   {

     cout << "Question 1 : \nWhich language is primarily used for Android app development? " << endl ; 
     cout << "a) Python\nb) Java\nc) C++\nd) Swift" << endl ;
     
     cout << "\nPlease write your answer : " ;
     cin >> a1 ; 

     if(a1 == 'b')
      {
         cout << "\nGreat job" << endl ; 

         score ++ ;

      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
     // Quiz : 
     cout << "\n\nQuestion 2 : \nWhich gas do plants absorb from the atmosphere? " << endl ;
     cout << "a) Oxygen\nb) Carbon Dioxide \nc) Nitrogen\nd) Hydrogen" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a2 ; 

     if(a2 == 'b')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz: 
     cout << "\n\nQuestion 3 : \nWhich planet is the largest in our solar system?" << endl ; 
     cout << "a) Earth\nb) Saturn\nc) Jupiter\nd) Neptune" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a3 ; 

     if(a3 == 'c')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz:
     cout << "\n\nQuestion 4 : \nWho wrote the play 'Romeo and Juliet'?" << endl ; 
     cout << "a) William Shakespeare \nb) Charles Dickens\nc) Mark Twain\nd) Jane Austen" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a4 ; 

     if(a4 == 'a')
      {
         cout << "\nGreat job" << endl ;
          score ++;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }


     //Quiz: 

     cout << "\n\nQuestion 5 : \nWhich element has the chemical symbol 'O'?" << endl ; 
     cout << "a) Gold \nb) Oxygen\nc) Iron\nd) Osmium" << endl ; 

     cout << "\nPlease write your answer : " ; 
     cin >> a5 ;
     
     if(a5 == 'b')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
       cout << "So your total score is : " << score << endl ; 

    }

    // For slot 3 

    else if (slot == 2)
    { 
             cout << "Question 1 : \nWhich ocean is the largest on Earth? " << endl ; 
     cout << "a) Atlantic\nb) Indian\nc) Pacific\nd) Arctic" << endl ;
     
     cout << "\nPlease write your answer : " ;
     cin >> a1 ; 

     if(a1 == 'c')
      {
         cout << "\nGreat job" << endl ; 

         score ++ ;

      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
     // Quiz : 
     cout << "\n\nQuestion 2 : \nWho painted the Mona Lisa? " << endl ;
     cout << "a) Vincent van Gogh\nb) Pablo Picasso \nc) Leonardo da Vinci\nd) Michelangelo" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a2 ; 

     if(a2 == 'c')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz: 
     cout << "\n\nQuestion 3 : \nWhich is the smallest prime number?" << endl ; 
     cout << "a) 0\nb) 1\nc) 2\nd) 3" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a3 ; 

     if(a3 == 'c')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz:
     cout << "\n\nQuestion 4 : \nWhich country gifted the Statue of Liberty to the USA?" << endl ; 
     cout << "a) France \nb) England\nc) Germany\nd) Italy" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a4 ; 

     if(a4 == 'a')
      {
         cout << "\nGreat job" << endl ;
          score ++;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }


     //Quiz: 

     cout << "\n\nQuestion 5 : \nWhat is the hardest natural substance on Earth?" << endl ; 
     cout << "a) Diamond \nb) Gold\nc) Iron\nd) Quartz" << endl ; 

     cout << "\nPlease write your answer : " ; 
     cin >> a5 ;
     
     if(a5 == 'a')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
       cout << "So your total score is : " << score << endl ; 

    }
 
    //For slot 4 

   else if(slot == 3) 
   {
          cout << "Question 1 : \nWhat is the tallest mountain in the world? " << endl ; 
     cout << "a) K2\nb) Kangchenjunga\nc) Mount Everest\nd) Lhotse" << endl ;
     
     cout << "\nPlease write your answer : " ;
     cin >> a1 ; 

     if(a1 == 'c')
      {
         cout << "\nGreat job" << endl ; 

         score ++ ;

      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
     // Quiz : 
     cout << "\n\nQuestion 2 : \nWhich element has the chemical symbol 'Na'? " << endl ;
     cout << "a) Sodium\nb) Nitrogen \nc) Neon\nd) Nickel" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a2 ; 

     if(a2 == 'a')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz: 
     cout << "\n\nQuestion 3 : \nWhich planet is closest to the Sun?" << endl ; 
     cout << "a) Mercury\nb) Venus\nc) Earth\nd) Mars" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a3 ; 

     if(a3 == 'a')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz:
     cout << "\n\nQuestion 4 : \nWho invented the telephone?" << endl ; 
     cout << "a) Thomas Edison \nb) Alexander Graham Bell\nc) Nikola Tesla\nd) Guglielmo Marconi" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a4 ; 

     if(a4 == 'b')
      {
         cout << "\nGreat job" << endl ;
          score ++;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }


     //Quiz: 

     cout << "\n\nQuestion 5 : \nWhich planet has the most moons?" << endl ; 
     cout << "a) Earth \nb) Jupiter\nc) Saturn\nd) Uranus" << endl ; 

     cout << "\nPlease write your answer : " ; 
     cin >> a5 ;
     
     if(a5 == 'c')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
       cout << "So your total score is : " << score << endl ; 

   }

   // For slot 5 

    else if(slot == 4)

   {
          cout << "Question 1 : \nWhich country is known as the Land of the Rising Sun? " << endl ; 
     cout << "a) China\nb) Japan\nc) Thailand\nd) South Korea" << endl ;
     
     cout << "\nPlease write your answer : " ;
     cin >> a1 ; 

     if(a1 == 'b')
      {
         cout << "\nGreat job" << endl ; 

         score ++ ;

      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
     // Quiz : 
     cout << "\n\nQuestion 2 : \nWhich organ in the human body produces insulin? " << endl ;
     cout << "a) Liver\nb) Pancreas \nc) Kidney\nd) Heart" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a2 ; 

     if(a2 == 'b')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz: 
     cout << "\n\nQuestion 3 : \nWhich is the longest river in the world?" << endl ; 
     cout << "a) Amazon\nb) Nile\nc) Yangtze\nd) Mississippi" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a3 ; 

     if(a3 == 'b')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }

     //Quiz:
     cout << "\n\nQuestion 4 : \nWhat is the largest mammal on Earth?" << endl ; 
     cout << "a) Elephant \nb) Blue Whale\nc) Giraffe\nd) Hippopotamus" << endl ; 

     cout << "\nPlease write your answer : " ;
     cin >> a4 ; 

     if(a4 == 'b')
      {
         cout << "\nGreat job" << endl ;
          score ++;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }


     //Quiz: 

     cout << "\n\nQuestion 5 : \nWhat is the boiling point of water at sea level?" << endl ; 
     cout << "a) 90°C \nb) 100°C\nc) 110°C\nd) 120°C" << endl ; 

     cout << "\nPlease write your answer : " ; 
     cin >> a5 ;
     
     if(a5 == 'b')
      {
         cout << "\nGreat job" << endl ; 
          score ++ ;
      }
      else
      {
         cout << "Wrong answer!" << endl ; 
      }
 
       cout << "So your total score is : " << score << endl ; 

   }  

   cout << "____________________________________________________________________" << endl ; 
   cout << "|                                                                   |" << endl ;
   cout << "|                   THANK YOU FOR PLAYING                           |" << endl ;
   cout << "|___________________________________________________________________|" << endl ; 
 
   }
   else 
   {
     cout << "Back to start!!" << endl ; 
   } 

    return 0 ; 
}