#include<iostream>
using namespace std;
namespace rajan{
    int a = 8;
}
namespace pantha{
    int a = 9;
}
int main() {
    cout<<"rajan ko a: "<<rajan::a<<endl;
    cout<<"pantha ko a: "<<pantha::a;
    return 0;
}