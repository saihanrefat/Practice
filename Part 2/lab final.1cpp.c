#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;
class shape
{
public:
   virtual getperimeter()
    {
        return 0;
    }
   virtual  getarea()
    {
        return 0;
    }
};
class circle : public shape
{
public:
    void getperimeter(double dim1,double dim2) : shape(dim1,dim2)
    {

    }
    double getarea()
    {
        return pi *dim1*dim2;
    }
};
class rectangle : public shape
{
public:
    void getperimeter(double dim1,double dim2) : shape(dim1,dim2)
    {

    }
    double getarea()
    {
        return dim1*dim2;
    }
};
int main()
{
    shape *p;
    circle c;
    p=&c;
    p->getperimeter=(10,20);
    cout<<"circle="<<p->getarea()<<endl;

