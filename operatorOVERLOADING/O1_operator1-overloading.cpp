#include<iostream>
using namespace std;
class overload{
    public: 
    int value;
    overload(){
        value = 10;
    }
    void operator ++(){
        value ++;
    }
};
int main() {
    overload op;
    cout << "Value before increment: " << op.value << endl;
    ++op;
    cout << "Value after increment: " << op.value << endl;
    return 0;
}