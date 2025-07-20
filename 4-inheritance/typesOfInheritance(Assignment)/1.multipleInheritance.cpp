
// multiple bases to single derived class

#include<iostream>
using namespace std;
class frontend{
    public:
    string language;
    void getdatafrontend(){
        cout<<"Enter frontend language: "<<endl;
        cin>>language;
    }
    void frontenddisplay(){
        cout<<language<<endl;
    }
};
class backend{
    public:
    string framework;
    void getdatabackend(){
        cout<<"Enter backend framework: "<<endl;
        cin>>framework;
    }
    void backenddisplay(){
        cout<<"Backend framework is: "<<framework<<endl;
    }
};
class fullstack : public frontend, public backend {
    public:
    int hours;  // Move hours as class member
    void getdatafullstack(){
        getdatafrontend();
        getdatabackend();
          cout<<"Enter no. of hours of work: "<<endl;
        cin>>hours;
    }
    void fullstackdisplay(){
        cout<<"Frontend language: ";
        frontenddisplay();
        backenddisplay();
        cout<<"Total hours of work: "<<hours<<endl;
    }
};
int main() {
    fullstack fs;
    fs.getdatafullstack();
    fs.fullstackdisplay();

    return 0;
}