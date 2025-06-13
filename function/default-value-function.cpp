#include<iostream>
using namespace std;
int add(int a, int b=8) {
    int result;
    result = a + b;
    return result;
}
int main() {
    
    int sum = add(5, 10); // Here, the first argument is provided, and the second uses the default value.
    int sum2 = add(15); // Here, the second argument uses the default value.
    cout << "The sum of 5 and 10 is: " << sum << endl; // Output: 15
    cout << "The sum of 15 and default value 8 is: " << sum2 << endl; // Output: 23
    return 0;
}

