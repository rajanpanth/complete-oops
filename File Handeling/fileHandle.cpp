#include<iostream>
#include<fstream>
using namespace std;
int main() {
    cout << "Example for formatted IO using ios member functions" << endl;
    
    cout << "Default: " << endl;
    cout << 123 << endl;
    
    cout << "width(15): " << endl;
    cout.width(15);
    cout << 123 << endl;
    
    cout << "width(15) and fill('#'): " << endl;
    cout.width(15);
    cout.fill('#');
    cout << 123 << endl;
    
    cout.precision(3);
    cout << "precision(3) ---> " << 123.4567890 << endl;
    cout << "precision(3) ---> " << 9.876543210 << endl;
    
    cout << "setf(showpos): " << endl;
    cout.setf(ios::showpos);
    cout << 123 << endl;

     cout << "setf(showbase): " << endl;
    cout.setf(ios::showbase);
    cout << 1000 << endl;
    
    cout << "unsetf(showpos): " << endl;
    cout.unsetf(ios::showpos);
    cout << 123 << endl;
    
    return 0;
}