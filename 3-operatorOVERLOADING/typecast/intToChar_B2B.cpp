#include<iostream>
using namespace std;
int main() {
    int n = 98;
    char c = static_cast<char>(n); 
    cout << "The character representation of " << n << " is: " << c <<endl;

    return 0;
}