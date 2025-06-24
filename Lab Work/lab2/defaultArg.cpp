#include<iostream>
using namespace std;
float divide(int a, int b=2){
    return a / b;
}
int main() {
  cout<<divide(10)<<endl; // Uses default value for b
  cout<<divide(10, 5)<<endl; // Uses provided value for b

    return 0;
}