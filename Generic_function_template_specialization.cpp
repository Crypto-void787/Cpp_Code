 
  
   // MAking a function that give u grip over tempalte specialization 
    #include <iostream>
    using namespace std;

      template <class T>
       void Display(T x)
        {
              cout << x << " Not a bool type .. !! " << endl;
         }

// Template specialization for bool
      template <>
       void Display<bool>(bool x)
       {
             cout << (x ? "True" : "False") << " (bool type)" << endl;
        }

int main()
{
    Display(4);       // Uses generic version
    Display(true);    // Uses specialized bool version
    Display(false);   // Specialized again

    Display('c') ; 
    return 0;
}
