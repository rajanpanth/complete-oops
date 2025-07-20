
#include <iostream>
using namespace std;

class student {
private:
    int roll;
    char name[20];
    static int count;
public:
    void getdata() {
        cout << "Enter roll number and name" << endl;
        cin >> roll >> name;
        count++;
    }
    static void displayCout() {
        cout << "count: " << count << endl;
    }
};


int student::count = 0;

int main() {
    student s1, s2, s3;
  
    student::displayCout();

   
    s1.getdata();
    student::displayCout();

    s2.getdata();
    student::displayCout();

    s3.getdata();
    student::displayCout();

    return 0;
}