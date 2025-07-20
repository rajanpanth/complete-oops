#include <iostream>
using namespace std;
class apple
{
private:
    int count;

public:
    apple()
    {
        count = 50;
    }
    void display()
    {
        cout << "price= " << count << endl;
    }
    apple operator--()
    {
        apple a5;
        --count;
        a5.count = count;
        return a5;
    }
};
int main()
{
    apple a1, a2;
    a1.display();
    a2 = --a1;
    a1.display();
    // a2.display();
    // return 0;
}