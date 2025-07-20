#include<iostream>
using namespace std;
class apple{
    public:
    int a;
    apple(){
    a=25;
}
    void display(){
        cout<<"A= "<<a<<endl;
    }
    void operator ++(){  /*Urenary op le arg ligdenw*/ /*Binary le auita ligxa*/
        ++a;
    }
};
int main() {
    apple ap;
    ap.display();
    ++ap;
    ap.display();
    return 0;
}
// object to object conversion impp