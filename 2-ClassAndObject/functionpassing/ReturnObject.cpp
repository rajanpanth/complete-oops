// return object from 

#include<iostream>
using namespace std;
class Rectangle {
    private:
        int l;
        int b;

    public:
    void setdata(int l1, int b1) {
            l = l1;
            b = b1;
        }   
        void display() {
            cout << "Length: " << l << ", Breadth: " << b<< endl;
            // cout << "Area: " << l * b << endl;
        }
        Rectangle add(Rectangle r6){
            Rectangle r8;
            r8.l = l + r6.l;
            r8.b = b + r6.b;
            return r8;
        }
    };
int main() {
    Rectangle r1,r2,r3;
    r1.setdata(10, 5);
  r1.display();
    r2.setdata(20, 10);
    r2.display();
    r3 = r1.add(r2);
    r3.display();


    return 0;
}