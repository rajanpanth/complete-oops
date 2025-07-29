#include <iostream>
using namespace std;
class Area
{
public:
    int length;
    int breadth;
    void setdata(int l, int b)
    {
        length = l;
        breadth = b;
    }
    virtual int calculateArea() = 0; // Pure virtual function
};
class Rectangle : public Area
{
public:
    int calculateArea()
    {
        return length * breadth;
    }
};
class Triangle : public Area
{
public:
    int calculateArea()
    {
        return (length * breadth) / 2;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    Area *ptr = &r;
    ptr->setdata(10, 5);
    cout << "Area of Rectangle: " << ptr->calculateArea() << endl;
    ptr = &t;
    ptr->setdata(10, 5);
    cout << "Area of Triangle: " << ptr->calculateArea() << endl;
    return 0;
}