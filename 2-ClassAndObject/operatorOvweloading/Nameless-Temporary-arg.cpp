#include<iostream>
using namespace std;
class book{
    private:
        int price;
    public:
        book(){
            price = 100;
        }
        void display(){
            cout << "price= " << price << endl;
        }
        book operator++(){
          
            ++price;
          return book(price);
        }
        book(int p){
            price = p;  
        }
};
int main() {
    book b1, b2, b3;   
    b1.display();
    b2 = ++b1; // Nameless temporary object created here
    b1.display();
    b2.display(); 
    return 0;
}