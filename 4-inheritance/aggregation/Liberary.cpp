#include<iostream>
using namespace std;
class book{
    private:
        int id;
        string author;
    public:
    void setdata() {
      cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Author Name: ";
        cin>>author;
    }

    void display(){
        cout<<"Books ID: "<<id<<endl;
        cout<<"Author: "<<author<<endl;
    }
};
class library{
    private:
    string address;
    string name;
    book b1;
    public:
    void setdata() {
        cout << "Enter Library Name: ";
        cin >> name;
        cout << "Enter Library Address: ";
        cin >> address;
        b1.setdata();

    }
    void display() {
        cout << "Library Name: " << name << endl;
        cout << "Library Address: " << address << endl;
        b1.display();
    }
};


int main() {
    library lib;
    cout<<"--------------------------" << endl;
    cout << "Enter Library Details:" << endl;

    lib.setdata();
    lib.display();


    return 0;
}