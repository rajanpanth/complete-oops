#include<iostream>
using namespace std;
namespace rajan{
    int a = 8;
}
namespace pantha{
    int a = 9;
    int b = 10;
}
using namespace rajan;
using  pantha::b;
int main() {
    cout<<"rajan ko a: "<<a<<endl;
    cout<<"pantha ko b: "<<b<<endl;
    cout<<"pantha ko a: "<<pantha::a; 
    return 0;
}