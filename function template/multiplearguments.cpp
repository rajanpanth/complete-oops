#include<iostream>
using namespace std;
template<class T, class U>
U Fmax(T a, U b)
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
  
    cout<<"Greater is:"<<Fmax(24, 26.4)<<endl;

  
    return 0;
}