#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    void setdata(int l, int b) {
        length = l;
        breadth = b;
    }
    void showdata();
    int area();

    int perimeter();
};
void rectangle::showdata(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;

    }
int rectangle::area(){
    return length * breadth;

}
int rectangle::perimeter(){
    return 2 * (length + breadth);
}
int main() {
    rectangle r1, r2;
    r1.setdata(10, 5);
    r1.showdata();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "-------------------" << endl;
    r2.setdata(20, 15);
    r2.showdata();
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    return 0;
}