#include <iostream>
using namespace std;
class beta;
class alpha
{
    private:
    int data;
public:
   
    void setdata(int d)
    {
        data = d;
    }
    friend int sum(alpha, beta);
};
class beta
{
     private:
    int data;
public:
    void setdata(int d)
    {
        data = d;
    }
    friend int sum(alpha, beta);
};
int sum(alpha x, beta y)
{
    return x.data + y.data;
}
int main()
{
    alpha a;

    a.setdata(10);
    beta b;
    b.setdata(20);
    cout << "Sum is: " << sum(a, b) << endl;
    return 0;
}