// Create any class of your choice with your own data members.
// a. Define a parameterized constructor and a function to display the data
// members.
// b. In the main module,
// i. Create an object using the parametrized constructor.
// ii. Create another object using the default copy constructor.
// c. Finally, define a destructor that prints: “Destructor Executed!!”


#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
   
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

  
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor Executed!!" << endl;
    }
};

int main() {
    // Creating object using parameterized constructor
    Book book1("C++ Basics", "Bjarne Stroustrup", 49.99);
    cout << "Book 1 Details:" << endl;
    book1.display();

    // Creating object using default copy constructor
    Book book2 = book1;
    cout << "\nBook 2 (Copied from Book 1) Details:" << endl;
    book2.display();

    return 0;
}
