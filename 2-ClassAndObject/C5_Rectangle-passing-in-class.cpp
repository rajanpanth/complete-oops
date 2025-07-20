#include <iostream>
using namespace std;

class rectangle {
private:
    int length, breadth;

public:
    void setdata(int l, int b) {
        length = l;
        breadth = b;
    }

    void showdata() {
        cout << "length=" << length << endl << "breadth=" << breadth << endl;
    }

    int findArea() {
        return length * breadth;
    }

    int findPerimeter() {
        return 2 * (length + breadth); // Corrected formula
    }
};

int main() {
    rectangle r;
    r.setdata(10, 5);
    r.showdata();
    cout << "Area = " << r.findArea() << endl;
    cout << "Perimeter = " << r.findPerimeter() << endl;
    return 0;
}