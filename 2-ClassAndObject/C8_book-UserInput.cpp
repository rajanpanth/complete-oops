#include<iostream>
using namespace std;

class book {
    public:
    //data members
    string title;
    string author;
   int price;
    void setdata() {
        cout << "Enter the title:" << endl;
        cin >> title;
        cout << "Enter the author:" << endl;
        cin >> author;
        cout << "Enter the price:" << endl;
        cin >> price;
    }
    //member functions
    void display() {
        cout << "Title: "<<title<<endl;
        cout << "Author: "<<author<<endl;
        cout << "Price: "<<price<<endl;
    }
}b1,b2;


int main() {
    
book b1,b2;
    // Creating two objects of class book
    // b1.setdata("C++ Programming", "Bjarne Stroustrup", 500);
    // b2.setdata("Effective C++", "Scott Meyers", 600);
 

  b1.setdata();
    b2.setdata();
b2.display(); // Displaying details of second book
cout<<"-------------------"<<endl;
    return 0;
}