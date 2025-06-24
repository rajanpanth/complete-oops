#include<iostream>
using namespace std;
inline int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "The maximum of " << x << " and " << y << " is: " << max(x, y) << endl;
    return 0;
}