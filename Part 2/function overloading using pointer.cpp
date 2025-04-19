#include<iostream>
using namespace std;
class base
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter a and b:"<<endl;
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"A is :"<<a<<endl;
        cout<<"B is :"<<b<<endl;
    }
};
class drive :public base
{
    int x,y;
public:
    void getdata()
    {
        cout<<"Enter x and y:"<<endl;
        cin>>x>>y;
    }
    void putdata()
    {
        cout<<"X is :"<<x<<endl;
        cout<<"Y is :"<<y<<endl;
    }
};
int main()
{
    base *ptr;
    drive d;
    ptr=&d;
    ptr->getdata();
    ptr->putdata();
    base b;
    ptr=&b;
    ptr->getdata();
    ptr->putdata();

}
