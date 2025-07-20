#include<iostream>
using namespace std;
class student {
    public:
    //data members
    int roll;
    string name;
    //member functions
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
}s1, s2;




int main() {
student s1, s2; // Creating two objects of class student
s1.name = "Rajan";
s1.roll = 101;
s2.name = "Ravi";
s2.roll = 102;  
s1.display(); // Displaying details of first student

    

    return 0;
}