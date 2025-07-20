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

int operator > (times tm){
    int total1 = hours * 60 + min;
    int total2 = tm.hours * 60 + min;
    if(total1 > total2){
        return 1;
    }
    else if(total2 > total1){
        return 0;
    }
    else{
        return -1; // for equal times
    }
}



};
int main() {
    times t1, t2;
    cout << "Enter first time:" << endl;
    t1.setdata();
    cout << "Enter second time:" << endl;
    t2.setdata();
    int result = t1 > t2;
    if(result ==1){
        cout<<"First time is greater than second time."<<endl;

    }
    else if(result == 0){
        cout<<"Second time is greater than first time."<<endl;
    }
    else{
        cout<<"Both times are equal."<<endl;
    }
    
    return 0;
}