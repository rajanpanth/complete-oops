
#include <iostream>
using namespace std;


int &min(int &x, int &y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    min(a, b) = 0; 

    cout << "a = " << a << endl << "b = " << b;

    return 0;
}
