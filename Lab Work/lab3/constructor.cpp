#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Copy constructor
    rectangle(rectangle &r) {
        length = r.length;
        breadth = r.breadth;
    }

    // Display function
    int display() {
        cout << "length: " << length << endl;
        cout << "breadth: " << breadth << endl;
        return 0;
    }
};

int main() {
    rectangle r1;              // Default constructor
    rectangle r2(2, 3);        // Parameterized constructor
    rectangle r3(r2);          // Copy constructor
    rectangle r4 = r2;         // Copy constructor again

    cout << "length and breadth of rectangle r1:" << endl;
    r1.display();

    cout << "length and breadth of rectangle r2:" << endl;
    r2.display();

    cout << "length and breadth of rectangle r3:" << endl;
    r3.display();

    cout << "length and breadth of rectangle r4:" << endl;
    r4.display();

    return 0;
}
