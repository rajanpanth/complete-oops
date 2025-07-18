// 


#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, r, sum = 0, original;
    cout << "Enter any number: ";
    cin >> n;
    original = n;

    int digits = 0, temp = n;
    while(temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while(temp != 0) {
        r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if(sum == original) {
        cout << original << " is an Armstrong Number" << endl;
    } else {
        cout << original << " is Not an Armstrong Number" << endl;
    }

    return 0;
}
