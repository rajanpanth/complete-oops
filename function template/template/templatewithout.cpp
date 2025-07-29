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
template<class T, class U>

class rectangle: public shape<float, float> {
    private:
    T l;
    U b;
 
public:
    rectangle(float a, float b) : shape<float, float>(a, b) {
      this-> l = a;
      this-> b = b;
    }
    void display1() {
        cout<<"Here is the rectangle class display function." << endl;
        shape<float, float>::display();
    }
};
int main() {
    rectangle<float, float> r1(10, 20); 
    r1.display1();
    return 0;
}