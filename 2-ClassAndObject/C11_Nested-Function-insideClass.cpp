#include<iostream>
using namespace std;
class total{
    private:
    float p,t,r;
    float interest(){
        return (p * t * r) / 100;
    }
  public:
    void setdata(float principal, float time, float rate) {
        p = principal;
        t = time;
        r = rate;
    }
    void display() {
        cout<<"Total is: "<<interest()+p<<endl;

}
};
int main() {
total t1;
t1.setdata(1000, 2, 5); 
t1.display();
    return 0;
}