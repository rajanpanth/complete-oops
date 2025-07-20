#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;

public:
    student()
    {
     roll = 450;
     name = "John Doe";
    }
    void display()
    {
        cout << "Roll No.= " << roll<<endl;
        cout << "Name= " << name << endl;
    }
    student operator++()
    {
        student b5;
        ++roll;
       
        return student(roll, name);
    }
    student(int r, string n)
    {
        roll = r;
        name = n;
    }
};
int main()
{
    student n1,b1, b2;
    // b1.display();
    n1.display();
    b2 = ++b1;
    b1.display();
    b2.display();
    return 0;
}