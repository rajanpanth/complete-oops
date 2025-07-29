
#include<iostream>
using namespace std;
template<class T>
class shape{
    T l,b;
public:
shape(int x, int y) {
    l = x;
    b = y;

}
shape(T x, T y) {
    l = x;
    b = y;
}
void display() {
    cout << "Length: " << l << ", Breadth: " << b << endl;
}
};
template<class T>

class rectangle: public shape<T> {
    private:
    T l;
    T b;
 
public:
    rectangle(float a, float b) : shape<T>(a, b) {
      this-> l = a;
      this-> b = b;
    }
  
};
int main() {
    rectangle<float> r1(10, 20); 
    r1.display();
    return 0;
}