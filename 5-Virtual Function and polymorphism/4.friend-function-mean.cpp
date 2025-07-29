#include<iostream>
using namespace std;
class mean {
public:
    int a, b;
    void setdata(int x, int y) {
        a = x;
        b = y;
    }
    friend float calculateMean(mean m); 
};
float calculateMean(mean m) {
    return (m.a + m.b) / 2.0;
}

int main() {
    mean m;
    m.setdata(10, 20);
    cout << "Mean is: " << calculateMean(m) << endl;
    return 0;
}