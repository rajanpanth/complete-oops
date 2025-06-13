#include<iostream>
using namespace std;
int minimumOfTwoNumbers(int a, int b) {
    return (a < b) ? a : b;
}
int main() {

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int min = minimumOfTwoNumbers(num1, num2);
    cout << "The minimum of " << num1 << " and " << num2 << " is: " << min << endl;
    return 0;

}           