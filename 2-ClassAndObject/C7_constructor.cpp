#include<iostream>
using namespace std;
class student {
private:
    string name;
    int roll;
    float marks;
public:

    student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
    };
int main() {

    student s1("John Doe", 101, 85);
    s1.display();
    return 0;
}
