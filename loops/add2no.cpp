
#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    char choice;

    do {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        sum = a + b;
        cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
        cout << "Do you want to add two more numbers? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting the program." << endl;
    return 0;
}
