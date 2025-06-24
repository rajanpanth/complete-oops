#include<iostream>
using namespace std;
int main() {
    int n,r, sum = 0, original;
    cout<<"Enter a Three-Digit Number: ";
    cin>>n;
    original = n; 
    while(n!=0){
        r = n%10;
        sum += r*r*r; 
        n/=10;
    }
    if(sum == original) {
        cout<<"Armstrong Number"<<endl;
    } else {
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}