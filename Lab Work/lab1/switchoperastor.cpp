#include <iostream>
using namespace std;

int main() {
    
    char n;
    do {
        char op;
        float num1, num2;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                cout << "Result = " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result = " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Math Error!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "\nDo you want more calculation? (Y/n): ";
        cin >> n;

    } while (n == 'Y' || n == 'y');

    return 0;
}
