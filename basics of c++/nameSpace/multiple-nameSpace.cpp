#include<iostream>
using namespace std;
namespace rajan{
    int a1 = 8;
}
namespace pantha{
    int a = 9;
}
using namespace rajan;
using namespace pantha;
int main() {
    cout<<"rajan ko a: "<<a1<<endl;
    cout<<"pantha ko a: "<<a;
    return 0;
}