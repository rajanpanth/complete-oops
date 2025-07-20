#include<iostream>
using namespace std;
int count= 9; //global declared
int a = 28; //global declared
int main() {
    int count=0; //local declared
    ::count = 5; //global changed
    ::a = 10; //global changed
    count = 7;
    cout<<"global is: "<<::count<<endl;
     cout<<"global a is: "<<::a<<endl;
    cout<<"local is: "<<count;
    return 0;
}