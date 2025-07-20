
// write a program to count total object created for a class.

#include <iostream>
using namespace std;
class Car
{
    int make;
    string model;
    static int count;

public:
    void setdata(int m, string mod)
    {
        make = m;
        model = mod;
        count++;
    }
    void display()
    {
        cout << "Total Cars Created: " << count << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};
int Car::count = 0;

int main()
{
    Car c1, c2, c3;
    c1.setdata(2020, "Toyota");
    c1.display();
    c2.setdata(2021, "Honda");
    c2.display();
    c3.setdata(2022, "Ford");
    c3.display();
    return 0;
}