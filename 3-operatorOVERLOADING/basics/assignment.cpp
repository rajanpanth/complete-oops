#include <iostream>
using namespace std;

class std_id
{
private:
    int id;

public:

    std_id(){
        id = 1;
    }

    std_id(int I){
        id = I;
    }

    void display(){
        cout << "Your ID is " << id << endl ;
    }

    std_id operator ++(){
        ++id;
        return std_id(id);
    }

};

int main()
{
    std_id obj1, obj2, obj3, obj4;
    obj1.display();
    obj2 = ++obj1;
    obj2.display();
    obj3 = ++obj2;
    obj3.display();
    obj4 = ++obj3;
    obj4.display();
    return 0;
}