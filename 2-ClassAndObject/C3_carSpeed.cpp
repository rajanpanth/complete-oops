#include<iostream>
using namespace std;
class car{
  
    //member functions
    public:
    int Speed(int maxSpeed) {
    maxSpeed;
       
      return maxSpeed;
    }
};


int main() {
car c1;
c1.Speed(100);
cout << "The speed of the car is: " << c1.Speed(100) << " km/h" << endl;

    return 0;
}