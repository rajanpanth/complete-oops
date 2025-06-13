#include<iostream>
using namespace std;
int main() {
int a,b;
float c;
cout<<"enter two numbers: ";
cin>>a>>b;
c = a/b;
cout<<"the reasult before type conversion: "<<c<<endl;
c=float(a)/b;
cout<<"the resulr after type conversion: "<<c;

    return 0;
}