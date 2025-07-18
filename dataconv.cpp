#include <iostream>
using namespace std;

class MKS
{
    int km, m;

public:
    MKS()
    {
        km = 0;
        m = 0;
    }

    MKS(int k, int mtr)
    {
        km = k;
        m = mtr;
    }

    void display()
    {
        cout << "KM= " << km << " Meter = " << m << endl;
    }

    int getkm()
    {
        return km;
    }

    int getm()
    {
        return m;
    }

    // operator FPS()
    // {
    //     int fe = km * 3280;
    //     int in = m * 40;
    //     fe = fe+ (in/12);
    //     in = in%12;
    //     return FPS(fe, in);
    // }
};
class FPS
{
    int feet, inch;

public:
    FPS()
    {
        feet = 0;
        inch = 0;
    }

    FPS(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void display()
    {
        cout << "Feet= " << feet << " Inch = " << inch;
    }
    FPS(MKS m3)
    {
        feet = m3.getkm() * 3280;
        inch = m3.getm() * 40;
        feet = feet + inch / 12;
        inch = inch % 12;
    }
};

// convert from MKS to FPS
int main()
{
    MKS m1(2, 37);
    FPS f1;
    f1 = m1;
    m1.display();
    f1.display();
}