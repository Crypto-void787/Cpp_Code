   
    // Gonna do code that help you guys to grab the genric function 
    // So to do that m gonna make a function that swaps the give values for a and b by using template or genric function 

     #include <iostream>
using namespace std;

 template <class R> 
 void swap_value(R &a, R &b) //pass by reference to actually change the value not just to change their local copy 
 
 {
    // storing the value of a temporaray so that we have empty a to set value of b in it 
     R temp = a ;   
     //  putting all values of b into a as we make a empty for that purpse 😒
     a = b ;
     // Now assigning the value that is stored in temporary location to  b or u can say b = a 
     b = temp ; 

 }
int main()
{
    int x = 2, y = 3; 
     // Original value 
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap_value(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
