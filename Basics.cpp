// Revising some of basics 

 #include<iostream> 
 using namespace std; 
 int main()
{     
     
     char T ; 
     cout << "Give char of u wanna get ASCII : "  ; 
     cin >> T ; 
     cout << "\n ASCII of " << T << " is : " << (int)T << endl ; 
       

     cout << "\n ASCII for small alphabets  . . . !! " << endl ; 

     char a = 'a' ; 
     char b = 'b' ; 
     char c = 'c' ; 
     char z = 'z' ;  
      
    

     cout << " ASCII value of (int)a -> " << (int)a << endl ; // getting ASCII value of small letters 
     cout << " ASCII value of (int)b -> " << (int)b << endl ; 
     cout << " ASCII value of (int)c -> " << (int)c << endl ; 
     cout << " And so on untill z . . . " << endl ; 
 

       
      cout << " ASCII for capital letters ! " << endl ; 
     // ASCII value for capital alphabets 

     char A = 'A' ; 
     char B = 'B' ; 
     char C = 'C' ; 
     char Z = 'Z' ;  
       
     cout << " ASCII value of capital A ->  " << (int)A << endl ;   //Getting capital letter's ASCII
     cout << " ASCII value of capital B ->  " << (int)B << endl ; 
     cout << " ASCII value of capital C ->  " << (int)C << endl ; 
     cout << " And so on untill Z . . . " << endl ; 
 
     
    return 0 ; 
}