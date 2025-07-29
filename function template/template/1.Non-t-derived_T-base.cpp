#include<iostream>
using namespace std;
template<class T, class U>
class shape{
    int l,b;
public:
shape(int x, int y) {
    l = x;
    b = y;

}
shape(T x, U y) {
    l = x;
    b = y;
}
void display() {
    cout << "Length: " << l << ", Breadth: " << b << endl;
}
};
class rectangle: public shape<float, float> {
    float a, b;
public:
    rectangle(float a, float b) : shape<float, float>(a, b) {
      this-> a = a;
      this-> b = b;
    }
    void display1() {
        cout << "L: " << a << ", B: " << b << endl;
    }
};
int main() {
    rectangle r1(10, 20); 
    r1.display();
    r1.display1();
    return 0;
}