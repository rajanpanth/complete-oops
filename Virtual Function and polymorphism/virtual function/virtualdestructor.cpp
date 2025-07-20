#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void sides()
    {
        cout<<"I am UNDEFINED!...Inside Base Class"<<endl;
    }
    virtual ~shape(){
        cout<<"shape base destroyed"<<endl;
    }

};

class square : public shape
{
    public:
    void sides()
    {
        cout<<"I have four sides.. Inside Derived Class Square"<<endl;
    }
    ~square(){
        cout<<"Derived square Destroyed"<<endl;
    }


};

class pentagon: public shape
{
    public:
    void sides()
    {
       cout<<"I have five sides.. Inside Derived Class Pentagon"<<endl; 
    }
    ~pentagon(){
        cout<<"Derived pentagon Destroyed"<<endl;
    }
};

int main()
{
    shape *p = new square();
    p->sides(); 
    delete p;  

}