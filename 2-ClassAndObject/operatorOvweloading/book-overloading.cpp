#include <iostream>
using namespace std;
class book
{
private:
    int price;

public:
    book()
    {
        price = 450;
    }
    void display()
    {
        cout << "price= " << price<<endl;
    }
    book operator++()
    {
        book b5;
        ++price;
        b5.price = price;
        return b5;
    }
};
int main()
{
    book b1, b2;
    b1.display();
    b2 = ++b1;
    b1.display();
    b2.display();
    // return 0;
}