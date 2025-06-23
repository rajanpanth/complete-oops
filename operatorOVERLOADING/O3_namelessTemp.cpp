#include<iostream>
using namespace std;
class overload {
    public:
    int value;
    overload() {
        value = 10;
    }   
    overload (int v){
        value = v;
    }
overload operator ++(){
   
    value++;
    return overload (value);


}
};
int main() {
    overload op1, op2;
    cout << "Value before increment: " << op1.value << endl;
    op2 = ++op1;
    cout << "Value after increment: " << op1.value << endl;
    cout << "Value after increment: " << op2.value << endl; 
    
    return 0;
}