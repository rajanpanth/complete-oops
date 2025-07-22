#include<iostream>
using namespace std;
template<class T>
T Fmax(T a, T b)
{
    T max;
    if(a>b)
        max=a;
    else
        max=b;
    return max;
}
int main()
{
  
    cout<<"Greater is:"<<Fmax(24, 26)<<endl;

    int c1='a', c2='A';
    cout<<"Greater is:"<<Fmax(c1,c2)<<endl;

    double d1=3.14, d2=2.71;
    cout<<"Greater is:"<<Fmax(d1, d2)<<endl;

    float f1=5.5, f2=6.6;
    cout<<"Greater is:"<<Fmax(f1, f2)<<endl;
    return 0;
}