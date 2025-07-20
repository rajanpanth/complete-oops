// passing objects as function arguments

#include<iostream>
using namespace std;
class Rectangle {
    private:
        int length;
        int breadth;

    public:
    void setdata(int l, int b) {
            length = l;
            breadth = b;
        }   
        void display() {
            cout << "Length: " << length << ", Breadth: " << breadth << endl;
            cout << "Area: " << length * breadth << endl;
        }
    };
int main() {
    Rectangle r1,r2,r3;
    r1.setdata(10, 5);
  r1.display();
    r2.setdata(20, 10);
    r2.display();
    r3.setdata(30, 15);
    r3.display();

    return 0;
}