#include <iostream>
using namespace std;
class shape
{
protected:
    int l, b, h;

public:
    void setdata()
    {
        l = 3;
        b = 4;
        h = 5;
    }
    virtual void calcarea() = 0; // pure virtual function -> abstract base class
};
// Area of rectangle
class rectangle : public shape
{

public:
    void calcarea() {
        cout << "Area of rectangle: " << l * b << endl;
    }
};
// Area of triangle
class triangle : public shape {
public:
    void calcarea() {
        cout << "Area of triangle: " << 0.5 * h * b << endl;
    }
};

    int main()
    {
        rectangle r1;
        r1.setdata();
        r1.calcarea(); // Calls rectangle's calcarea
        triangle t1;
        t1.setdata();
        t1.calcarea(); // Calls triangle's calcarea
        return 0;
    }