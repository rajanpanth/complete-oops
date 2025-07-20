#include<iostream>
using namespace std;
int main() {
    cout<<"enter the number"<<endl;
    int n,i;
    cin>>n;
    int fact = 1;
    for(i=1; i<=n; i++){
        fact = fact *i;
    }
    cout<<"The factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}