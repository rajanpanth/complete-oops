#include<iostream>
using namespace std;
class overload{
    public:
    int value;
    overload(){
        value = 10;
    }
    overload(int v){
        value = v;
    }
    overload operator --(int){
        return overload(value--);
    }
    int showvalue(){
        return value;
    }
};
int main() {
    overload op1, op2;
    op1--;
    cout << "Value before decrement: " << op1.showvalue() << endl;
    op2 = op1--;
   
    cout << "Value op1 after decrement: " << op1.showvalue() << endl;
     cout << "Value of op2 after decrement: " << op2.showvalue() << endl;
    
    return 0;
}