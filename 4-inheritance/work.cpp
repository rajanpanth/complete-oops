#include<iostream>
using namespace std;
class person {
    public:
    string name;
    int ssid;
    string address;
   void setdata(int s, string n, string a) {
        ssid = s;
        name = n;
        address = a;

    }
    void display(){
cout<<"Name: " << name << endl;
cout<<"SSID: " << ssid << endl;
cout<<"Address: " << address << endl;
    }
};

class student : public person {
   
    string faculty;
     public:
   void set_data(string n, int s, string a, string f) {
       setdata(s, n, a);
        faculty = f;
    }
    
   void disp(){
    display();
    cout<<"Faculty= "<<faculty<<endl;
   }
};
int main() {

    student s1;
    s1.set_data("Rajan", 123456, "chabahil", "IOST" );
    s1.disp();
    return 0;
}  
  