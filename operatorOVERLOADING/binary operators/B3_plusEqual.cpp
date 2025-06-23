#include<iostream>
using namespace std;
class money{
private:
    int rupees;
    int paisa;
public:
money(){
    rupees = 0;
    paisa = 0;
}
money(int r, int p){
    rupees = r;
    paisa = p;
}
void display(){
    cout<< "Money is " << rupees << " rupees and " << paisa << " paisa." << endl;

}
    money operator -= (money m5) {
      money temp;
      temp.rupees = rupees - m5.rupees;
        temp.paisa = paisa - m5.paisa;
        return temp;
    }



};
int main() {
money m1(10, 50), m2(5, 25), m3;
cout << "Before subtraction: " << endl;
m1.display();
m2.display();
m3 = m1 -= m2; // Using the overloaded operator
cout << "After subtraction: " << endl;
m3.display();

    return 0;
}