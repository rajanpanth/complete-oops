#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter any number"<<endl;
    cin >> n;
    for (i=n; i <= 10+n; i+=2)
    {
        cout << i << endl;
    }
    return 0;
}