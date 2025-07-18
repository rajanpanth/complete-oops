#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;

    person(string n, int a)
    {
        age = a;
        name = n;
    }

    void persondisplay()
    {
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
    }
};

class employee : public person
{
public:
    string work;
    int salary;

    employee(string n, int a, string w, int s) : person(n, a)
    {
        work = w;
        salary = s;
    }

    void employeedisplay()
    {
        persondisplay();
        cout << "Work is: " << work << endl;
        cout << "Salary id: " << salary << endl;
    }
};

class student : public employee
{
public:
    int roll;
    string course;
    
     student(int r, string c, string n, int a, string w, int s) : employee(n, a, w, s){
        roll = r;
        course = c;
        }
        // OR

    // student(int r, string c, string n, int a, string w, int s)
    //     : employee(n, a, w, s), roll(r), course(c) {}

    void getdatast(int r, string c, string n, int a, string w, int s)
    {
        roll = r;
        course = c;
        name = n;
        age = a;
        work = w;
        salary = s;
    }

    void studentdisplay()
    {
        employeedisplay();
        cout << "Roll is: " << roll << endl;
        cout << "Course is: " << course << endl;
    }
};
int main()
{
    student s(12, "science", "rajan", 20, "developer", 50000);
    s.studentdisplay();

    return 0;
}