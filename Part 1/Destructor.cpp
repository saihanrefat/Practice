#include<iostream>
using namespace std;
class called
{
public:
    called()
    {
        cout<<"constructor is called"<<endl;
    }
    void refat()
    {
        cout<<"x=10"<<endl;
    }
    ~called()
    {
        cout<<"Desstructor is called"<<endl;
    }
};
int main()
{
    called ob;
    ob.refat();

}
