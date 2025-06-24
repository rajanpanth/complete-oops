#include<iostream>
using namespace std;
class details{
    private:
        int age;
        string name;
    public:
    void setdata(int a, string n) {
        age = a;
        name = n;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
  
};
int main() {
details d1, d2;

d1.setdata(25, "Alice");
d2.setdata(30, "Bob");
d1.display();
d2.display();


    return 0;
}