#include<iostream>
using namespace std;
class  base{
    public:
    int a;
    private:
    int b;
    protected:
    int c;

base(){
    a = 20;
    b = 30; 
    c = 40;
}
};

class derived1 : public base   //a can be accessed,  b can be accessed. c becomes protected
{
void display(){
    cout<<"A= "<<a<<endl; //A is public here
    cout<<"B= "<<b<<endl;  //B cannot be accessed here
    cout<<"C= "<<c<<endl;  //C is protected here
}

};

class derived2 : public derived1{
void display(){
    cout<<"A= "<<a<<endl; //A is public here
    cout<<"B= "<<b<<endl;  //B cannot be accessed here
    cout<<"C= "<<c<<endl;  //C is protected here
}
};

class derived1 : protected base{
void display(){
    cout<<"A= "<<a<<endl; //A is protected here
    cout<<"B= "<<b<<endl;  //B cannot be accessed here
    cout<<"C= "<<c<<endl;  //C is protected here
}
};

class derived1 : private base{
void display(){
    cout<<"A= "<<a<<endl; //A is private here
    cout<<"B= "<<b<<endl;  //B cannot be accessed here
    cout<<"C= "<<c<<endl;  //C is private here
}

};

class derived2 : private derived1{
    void display(){
        cout<<"A= "<<a<<endl; //A is private here cannot be accessed
        cout<<"B= "<<b<<endl;  //B cannot be accessed here
        cout<<"C= "<<c<<endl;  //C is private here cannot be accessed
    }
};

int main() {
    return 0;
}