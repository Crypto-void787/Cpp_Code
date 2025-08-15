
 
  // rand() ---> c++ has an amazing function to generatae random value 
  // cstdlib ----> The library use for rand() function 

   #include<iostream> 
   #include<cstdlib>
   #include<ctime>
   using namespace std ; 

    int main()
    { 
         srand(time(NULL));  // To make sure tha rand() will generate a unique value every time when we run it 

         int luck ; // Declaring varible to store our value 

         luck = rand() % 10 ; // applying rand() function 

         cout << luck << endl ; //calling function 
         
         return 0 ; 
    }