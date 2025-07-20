#include<iostream>
using namespace std;
class details{
    public:
    string UserName="Rajan";
    private:
    int Password=1234;
};
int main() {
details d1;
cout << "User Name: " << d1.UserName << endl;
cout << "Password: " << d1.Password << endl; // This line will cause a compilation error because Password is private
    return 0;
}