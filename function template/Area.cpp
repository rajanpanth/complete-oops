#include<iostream>
using namespace std;
template<class T, class U>
U Area(T l, U b)
{
    return l * b;
}
int main()
{
    int length = 5;
    float breadth = 12.5;
    cout << "Area of rectangle is: " << Area(length, breadth) << endl;
  
   
    return 0;
}