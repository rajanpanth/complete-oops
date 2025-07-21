// Declare in  the class whose private attribute are to be occured
// Friend function ->public/private/protected
// FF are called without using object class
// ff always takes the object class to which it is friend as
// ff is decleration inside the class
// ff destiation outside the class

#include <iostream>
using namespace std;

// Forward declaration
class Person;

class Student
{
private:
    int roll;
    string name;

public:
    Student(int r, string n)
    {
        this->roll = r;
        this->name = n;
    }

    friend class Person;
};

class Person
{
private:
    int SSN;
    string Address;

public:
    Person(int ssn, string adr)
    {
        this->SSN = ssn;
        this->Address = adr;
    }

   void display(Student S);
    
};

void display(Student S, Person P)
{
        cout << "Roll no: " << S.roll << endl
         << "Name: " << S.name << endl;
    cout << "Social Security Number: " << P.SSN << endl
         << "Address: " << P.Address << endl;
}

int main()
{
    Student S1(14, "Rajan");
    Person P1(656, "Rajan1");
    
    display(S1, P1);
    
    return 0;
}