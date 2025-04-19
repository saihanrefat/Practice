#include<bits/stdc++.h>
using namespace std;
class tringle
{
private:
    double base;
    double length;
public:
    double setvalue( double b,double l)
    {
        base =b;
        length=l;
    }
    double getarea();
};
double tringle :: getarea()
{
    return 0.5*base*length;
}

class rectangle
{
private:
    double base;
    double length;
public:
    double setvalue( double b,double l)
    {
        base =b;
        length=l;
    }
    double getarea();
};
double rectangle :: getarea()
{
    return base*length;
}
int main()
{
    tringle t;
    t.setvalue(5,3);
    cout<<t.getarea();
    cout<<endl;
     rectangle r;
    r.setvalue(5,3);
    cout<<r.getarea();

}

