#include <iostream>
using namespace std;
class Base
{
public:
    int a, b;
    void setdata()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void display()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
class Derived : public Base
{
public:
    int c;
    void setdata()
    {
        cout << "Enter third number: ";
        cin >> c;
    }
    void display()
    {
        cout << "c = " << c << endl;
    }
};

int main()
{
    Derived d1;
    d1.setdata();
    d1.display();
    // derived_class_object.base_class_name::overriden_function();
    d1.Base::setdata(); // Call base class setdata
    d1.Base::display(); // Call base class display
    return 0;
}

// imp question:
// 1. diff btw overriding and overloading