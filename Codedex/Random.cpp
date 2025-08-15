
 
  // rand() ---> c++ has an amazing function to generatae random value 
  // cstdlib ----> The library use for rand() function 
  /*  ctime ---> To make sure every time you run the program, you get a new random number,
   you will need to “seed” the random number generator before the declaration of the variable */ 
   
   #include<iostream> 
   #include<cstdlib>
   #include<ctime>
   using namespace std ; 

    int main()
    { 
         srand(time(NULL));  // To make sure tha rand() will generate a unique value every time when we run it
         
         // srand(time(NULL)) always declared before declaring variable 

         int luck ; // Declaring varible to store our value 

         luck = rand() % 10 ; // applying rand() function 

         cout << luck << endl ; //calling function 
         
         return 0 ; 
    }