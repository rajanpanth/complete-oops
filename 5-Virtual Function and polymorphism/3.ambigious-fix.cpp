#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout << "Constructor of class a called" << endl;
    }
    void display(){
        cout << "Display function of class a" << endl;
    }
};
class b: public virtual a{

};
class c: public virtual a{

};
class d: public b, public c{

};
int main() {
    d obj;
    obj.display(); 
    return 0;
}