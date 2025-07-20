#include<iostream>
using namespace std;
class times{
private:
    int hours;
    int min;
public:
    void setdata(){
        cout<<"Enter hours: ";
        cin>>hours;
        cout<<"Enter minutes: ";
        cin>>min;
    }
    void display(){
        cout<<"Time is "<<hours<<" hours and "<<min<<" minutes."<<endl;
    }

    void operator > (times tm){
     hours = tm.hours;
     min = tm.min;
    }
    bool operator = (times tm){
        return (hours == tm.hours) && (min == tm.min);
    }
};
int main() {
    times t1, t2;
    cout << "Enter time:" << endl;
    t1.setdata();
    t2 = t1; // Copy t1 to t2

    cout << "First time: ";
    t1.display();

    if(t1 = t2){
        cout<<"Both times are equal."<<endl;
    }
    // else if(t1 > t2){
    //     cout<<"First time is greater than second time."<<endl;
    // }
    // else{
    //     cout<<"Second time is greater than first time."<<endl;
    // }

    return 0;
}

  