#include <iostream>
using namespace std;

class employee
{
private:
    int emp_id;
    string name, post;

public:
    void setdata()
    {
        cout << "Please provide details for Employee:" << endl;
        cout << "Enter the ID: ";
        cin >> emp_id;
        cout << "Enter the First name: ";
        cin >> name;
        cout << "Enter the post: ";
        cin >> post;
    }
    void showdata()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
    }
};

int main()
{
    employee e1;
    e1.setdata();
    e1.showdata();
    return 0;
}