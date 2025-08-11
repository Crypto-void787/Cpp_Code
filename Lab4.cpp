  //Program to finding out minimum and maxim value from an array 

  #include<iostream>
  using namespace std; 

  //Function for minimum value 

   int findMin(int array[])
   {
     int min = array[0] ; 
      for(int i = 1 ; i < 9 ; i++ )
       { 
           if(min > array[i])
            { 
                min = array[i] ; 
            } 
           
       }

       return min; 
   } 
    
   // Maximum value finiding function 
  
    int findMax(int array[])
    {
         int max ; 
          max = array[0] ; 

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
     
     int array[10] = {10, 67, 35, 87, 24, 36 , 76 , 86, 13 , 0  };  
     
     // calling functions 

     cout << "Maninum value of the function is  -> " << findMin(array) << endl ; 
     cout << "Maximum value of the function is  -> " << findMax(array) << endl ;
      
    return 0 ; 
  }; 