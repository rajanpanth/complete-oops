
// usd to nrp (fix question for first terminal)

#include<iostream>
using namespace std;
class NRP; // Forward declaration of rupee class
class NRP {
    int rupee;
    int paisa;
public:
NRP(){
    rupee = 0;
    paisa = 0;


}
NRP(int r, int p){
    rupee = r;
    paisa = p;
}
void display() {
    cout << "Amount is " << rupee << " rupees and " << paisa << " paisa." << endl;
}
};

class USD {
    float dollar;
    float cents;
public:
USD() {
    dollar = 0.0;
    cents = 0.0;
}
USD(float d, float c) {
    dollar = d;
    cents = c;
}
void display() {
    cout << "Amount is " << dollar << " dollars and " << cents << " cents." << endl;
}
operator NRP() {
    int r = static_cast<int>(dollar * 145.0); // Assuming 1 USD = 145 npr
    int p = static_cast<int>(cents * 0.145); // Assuming 1 cent = 0.145 npr
    return NRP(r, p);
}
};
int main() {
    USD usd1(10.0, 50.0); // 10 dollars and 50 cents
    NRP npr1;
    npr1 = usd1; // Conversion from USD to NRP
    usd1.display();
    npr1.display(); // Display the converted amount in NRP
    return 0;
}