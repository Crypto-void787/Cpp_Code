#include<iostream>
using namespace std;

class Books
{
public:
    string name;
    char availability;

    // Inner class
    class Readers
    {
    public:
        string Reader_name;
        int Age;
        string book_type;
    };

    // Object of inner class
    Readers R1;

    Books() 
    {
        
    }

    Books(string name, char availability)
    {
        this->name = name;
        this->availability = availability;
    }

    void Display()
    {
        cout << "Book name : " << name << endl;
        cout << "Is it available : " << availability << endl;
        cout << "Reader's name : " << R1.Reader_name << endl;
        cout << "Reader's age : " << R1.Age << endl;
        cout << "Book type that " << R1.Reader_name << " usually Reads: " << R1.book_type << endl;
    }
};

int main()
{
    Books b1("Rich Dad Poor Dad", 'y');
    b1.R1.Reader_name = "Ali";
    b1.R1.Age = 21;
    b1.R1.book_type = "Finance";

    b1.Display();

    return 0;
}
