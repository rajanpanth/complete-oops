#include<iostream>
using namespace std;

template<class T>

class demo{

    T a, b;
    public:
    demo(T x, T y) {

        this->a = x;
        this->b = y;
    }
    T getMax() {

        return (a > b) ? a : b;
    }
};
int main() {

    demo <int> d1(10, 20);
    cout << "Max is: " << d1.getMax() << endl;
    return 0;
}