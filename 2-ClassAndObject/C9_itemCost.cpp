#include<iostream>
using namespace std;
class item{
    private:
    int itemid;
    int itemcost;
    public:
    void setdata(int id, int cost) {
        itemid = id;
        itemcost = cost;
    }
    void showdata() {
        cout << "Item ID: " << itemid << endl;
        cout << "Item Cost: " << itemcost << endl;
    }
};
int main() {
item i1, i2;
i1.setdata(101, 500);
i1.showdata();
cout << "-------------------" << endl;
i2.setdata(102, 1000);
i2.showdata();

    return 0;
}