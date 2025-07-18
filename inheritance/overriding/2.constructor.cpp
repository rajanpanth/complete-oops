// without parameterized constructor
// #include <iostream>
// using namespace std;
// class base
// {
// protected:
//     int a, b;

// public:
// base()
//     {
//         a = 10;
//         b = 20;
//     }
//     void display()
//     {
//         cout << "a = " << a << ", b = " << b << endl;
//     }
// };

// class derived : public base
// {
//     int c;

// public:
//     derived()
//     {
//         c = 30;
//     }
//     void display()
//     {
//         cout << "c = " << c << endl;
//     }
// };
// int main()
// {
// derived d1;
//     d1.display(); // Calls derived class display
//     d1.base::display(); // Calls base class display
//     return 0;
// }


// with parameterized constructor
#include <iostream>
using namespace std;
class base
{
protected:
    int a, b;

public:
base(int z, int p)
    {
        a = z;
        b = p;
    }
   
    void display()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

class derived : public base
{
    int c;

public:
    derived(int x, int y) : base(x, y) // Pass valid arguments to base class constructor
    {
        c = 30;
    }
    void display()
    {
        cout << "c = " << c << endl;
    }
};

int main()
{
    derived d1(10, 20); // Provide required arguments to derived constructor
    d1.display(); // Calls derived class display
    d1.base::display(); // Calls base class display
    return 0;
}