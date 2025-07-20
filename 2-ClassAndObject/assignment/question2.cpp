#include<iostream>
using namespace std;
 class cat{
    private:
    string breed,color;
    int weight;


    public:
    void setdetails(string b, string c, int w)
    {
        breed=b;
        color=c;
        weight=w;


    }
    public:
    void display()
    {
        cout<<"The details of the cat are:"<<breed<<" breed, "<<color<<" color and "<<weight<< " KG"<<endl;
    }


 };
 int main()
 {
    cat c1;
    string b,c;
    int w;
    cout<<"Enter the details of the cat!"<<endl;
    cout<<"Enter breed, color and weight of cat in KG!"<<endl;
    cin>>b>>c>>w;
    c1.setdetails(b,c,w);
    c1.display();
    return 0;
 }