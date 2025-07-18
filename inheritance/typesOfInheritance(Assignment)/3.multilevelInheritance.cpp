#include<iostream>
using namespace std;
class person {
    public:
    string name;
    int age;
    void getdataperson(){
        cout<<"Enter name: "<<endl;
        cin>>name;
          cout<<"Enter age: "<<endl;
        cin>>age;
    }
    void persondisplay(){
cout<<"Name is: "<<name<<endl;
cout<<"Age is: "<<age<<endl;
    }

};

class employee : public person{
    public:
    string work;
    int salary;
   
    void getdataemp(){
         getdataperson();
       cout<<"Enter work: "<<endl;
        cin>>work;
          cout<<"Enter sALARY: "<<endl;
        cin>>salary;
    }
    
      void employeedisplay(){
        persondisplay();
cout<<"Work is: "<<work<<endl;
cout<<"Salary id: "<<salary<<endl;
    }
};

class student : public employee{
    public:
    int roll;
    string course;

     void getdatast(){
        getdataemp();
       cout<<"Enter Roll: "<<endl;
        cin>>roll;
          cout<<"Enter Course: "<<endl;
        cin>>course;
    }
      void studentdisplay(){
        employeedisplay();
cout<<"Roll is: "<<roll<<endl;
cout<<"Course is: "<<course<<endl;
    }
};
int main() {
    student s;
    s.getdatast();
    s.studentdisplay();
    
    return 0;
}