#include<iostream>
using namespace std;
class animal{
    public:
    virtual void sound(){
        cout << "Animal has sound, Inside Animal"<<endl;

    }
};
class dog: public animal{
    public:
    void sound(){
        cout<<"I am Dog, WOFF!, WOFF!"<<endl;
    }
};
class cat: public animal{
    public:
    void sound(){
        cout<<"I am Cat, MEOW!, MEOW!"<<endl;
    }
};
int main() {
    animal *ptr;
    animal a;
    dog d;
    cat c;
    ptr = &a; 
    ptr->sound(); 

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();



    return 0;
}

// virtual -> goes to runtime
// else runtime