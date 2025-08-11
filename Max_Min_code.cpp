 //just practice of lab 4 
  

  #include<iostream>
  using namespace std;  
   
   int findMin(int array[]) 
   { 
          int min ; 
          min = array[0] ; 

         for(int i = 1 ; i < 9 ; i++)
         {
              if(min > array[i])
               {  
                  min = array[i] ; 
                 
               }
         }
          
         return min ; 
   }  
    

    //Maximum number function 

     int findMax(int array[])
     { 
          int max ; 
          max = array[0] ; 

          //using for loop 
           
           for(int j = 1 ; j < 9 ; j++)
           {
             if( max < array[j])
             { 
                 max = array[j] ; 
             }
           }
            return max ; 
     }
 
  int main()
  {  
     int array[10] = { 23 ,18 , 87, 9254, 22 , 38353 , 83, 482920, 2923 , 2 } ; 
      
     cout << "*******************************************************" << endl ; 
      
     cout << "The minimum number in the array is --> " << findMin(array) << endl ; 
     cout << "The maximum number in the array is --> " << findMax(array) << endl ;
     
     cout << "********************************************************" << endl ;

    return 0 ; 
  }