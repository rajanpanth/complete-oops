#include <iostream>
using namespace std;
template <class U, class T>
U Fmax(T a, U b)
{
    T max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}
int main()
{
    cout << "Greater is:" << Fmax(24, 'A') << endl;
    return 0;
}