#include<iostream>
using namespace std;
class student {
    private:
        int rollNo;
        string name;
    public:
        void setdata() {
            cout << "Enter Roll No: ";
            cin >> rollNo;
            cout << "Enter Name: ";
            cin >> name;
        }

        void display() {
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
        }
};
class course {
    private:
        string courseName;
        int courseCode;
        student s1;
    public:
        void setdata() {
            cout << "Enter Course Name: ";
            cin >> courseName;
            cout << "Enter Course Code: ";
            cin >> courseCode;
            s1.setdata();
        }

        void display() {
            cout << "Course Name: " << courseName << endl;
            cout << "Course Code: " << courseCode << endl;
            s1.display();
        }
};
int main() {
    course c1;
    cout << "--------------------------" << endl;
    cout << "Enter Course Details:" << endl;
    c1.setdata();
    c1.display();
    cout << "--------------------------" << endl;
    return 0;
}