#include<iostream>
using namespace std;
class complex{
private:
int real, img;
public:
void getdata(){
    cout<<"Enter the real and imaginary part of complex number:";
    cin>>real>>img;
}
void display(){
    cout<<real<<"+i"<<img<<endl;
}
// addd
complex addcomplex(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
};
int main() {
    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3=c2.addcomplex(c1);
    cout<<"Addition = ";
    c3.display();
    return 0;
}