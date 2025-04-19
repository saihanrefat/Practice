#include<bits/stdc++.h>
using namespace std;
class shape
{
    public:
    double dim1,dim2;
    shape(){}
    shape(double dim1,double dim2)
    {
       this-> dim1=dim1;
       this-> dim2=dim2;
    }
    virtual double refat()
    {
        return 0;
    }
};
class rectangle : public shape
{
public:

     rectangle(double dim1,double dim2)
     :shape(dim1,dim2)
    {

    }
    double refat()
    {
        return dim1*dim2;
    }
};
class area : public shape
{
public:

     area(double dim1,double dim2)
     :shape(dim1,dim2)
    {

    }
    double refat()
    {
        return 2*(dim1*dim2);
    }
};
int main()
{
    shape *s;
    rectangle r(10,20);
    area a(10,20);
    s=&r;
    cout<<s->refat()<<endl;
    s=&a;
     cout<<s->refat()<<endl;

    return 0;
}
