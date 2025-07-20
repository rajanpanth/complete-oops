#include <iostream>
using namespace std;

// Define the Rectangle class
class Rectangle {
public:
    int length;
    int breadth;

    // Function to calculate and display area
    void calc_area() {
        int area = length * breadth;
        cout << "Area: " << area << endl;
    }
};

int main() {
    // Create object r1 and set its attributes
    Rectangle r1;
    r1.length = 17;
    r1.breadth = 4;

 
    r1.calc_area();

    return 0;
}