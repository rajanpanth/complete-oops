#include <iostream>
using namespace std;
class dist
{
private:
    int km, meter;

public:
    dist(float le)
    {
        km = static_cast<int>(le);
        // km = le / 10;
        meter = static_cast<int>((le - km) * 1000);
    }

    void display()
    {
        cout << "Distance is " << km << " km and " << meter << " meter." << endl;
    }
};
int main()
{
    float len;
    cout << "Enter distance in km.meter: ";
    cin >> len;
    dist d1(len); // or dist d1 = len;
    d1.display();
    return 0;
}