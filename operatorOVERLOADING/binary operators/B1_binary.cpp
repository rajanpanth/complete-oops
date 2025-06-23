#include<iostream>
using namespace std;
class samaya{
    public:
    int hours;
    int minutes;
    samaya(){
        hours = 0;
        minutes = 0;
    }
    samaya(int h, int m){
        hours = h;
        minutes = m;
    }
    void display(){
        cout << "Time is " << hours << " hours and " << minutes << " minutes." << endl;
    }
    samaya operator + (samaya s5){
        samaya temp;
        temp.hours = hours + s5.hours;
        temp.minutes = minutes + s5.minutes;
        return temp;
        // for nameless object
        // int hrs = hours + s5.hours;
        // int mins = minutes + s5.minutes;
// return samaya(temp.hours, temp.minutes);
    }
  

};
int main() {
    samaya t1(2,40), t2(10,50), t3;
    cout<<"Before addition: ";
    t1.display();
    t2.display();
    t3 = t1 + t2;
    cout << "After addition: ";
    t3.display();
    return 0;
}