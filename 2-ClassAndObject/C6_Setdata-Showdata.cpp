#include<iostream>
using namespace std;
class data{
    private:
    int data1;
    int data2;
    public:
    void setdata(int d1, int d2) {
        data1 = d1;
        data2 = d2;
    }
    void showdata() {
        cout << "Data1: " << data1 << endl;
        cout << "Data2: " << data2 << endl;
    }
};
int main() {
    data d1, d2;
    d1.setdata(10, 20);
    d2.setdata(30, 40);
    d1.showdata();
    d2.showdata();
    return 0;
}