#include<iostream>
using namespace std;
class FPS; // Forward declaration of FPS class
class FPS {
    int ft, in;
public:
FPS() {
    ft = 0;
    in = 0;
}
FPS(int f, int i) {
    ft = f;
    in = i;
}
void display() {
    cout << "Distance is " << ft << " ft and " << in << " in." << endl;
}
};
class MKS{
    int km, m;
public:
MKS(){
    km = 0;
    m = 0;
}
MKS(int k, int mtr){
    km = k;
    m = mtr;

}
void display(){
    cout << "Distance is " << km << " km and " << m << " m." << endl;   
}
operator FPS()
{
int fe = km * 3280; // 1 km = 3280 ft
 int in = m * 40; // 1 m = 40 in
 fe = fe + (in / 12); // Convert inches to feet
 in = in % 12; // Remaining inches after converting to feet
    return FPS(fe, in);

}
};


// conversion from MKS to FPS


int main() {
    MKS m1(2, 30); 
    FPS f1;
    f1 = m1;
    m1.display();
    f1.display();
    // MKS to FPS conversion
    return 0;
}