#include <iostream>
using namespace std;
class details
{
private:
    string name;
    int age;
    string address;

public:
    void setdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};
int main()
{
    details d1, d2;
    cout << "Enter details for first person:" << endl;
    d1.setdata();
    cout << "Enter details for second person:" << endl;
    d2.setdata();
    d1.showdata();
    cout << "-------------------" << endl;
    d2.showdata();
    return 0;
}