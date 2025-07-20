#include<iostream>
using namespace std;
class NRS {
    private:
    int rs, ps;
    public:
    NRS(int r, int p) {
        rs = r;
        ps = p;
    }
    operator float() {
        float w = rs + static_cast<float>(ps) / 100;
        return w;

    }
};
int main() {
    NRS np(200,50);
    float q = float(np);
    cout << "The value in float is: " << q << endl;
    return 0;
}