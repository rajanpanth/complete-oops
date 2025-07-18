#include<iostream>
using namespace std;

class Test {
private:
    int x, y;
public:
    Test() {
        x = 0;
        y = 0;
        cout << "memory is allocated" << endl;
    }
    ~Test() {
        cout << "x=" << x << "\t" << "y=" << y << endl;
        cout << "memory is deallocated" << endl;
    }
};

int main() {
    {
        Test p;
    } // life time of p is finished here, and destructor is called
    return 0;
}