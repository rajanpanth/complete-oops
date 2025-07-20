#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << "3*" << i << "=" << i * 3 << endl;
        i++;
    }
    return 0;
}