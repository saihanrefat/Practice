#include<iostream>
#define pi 3.1416
using namespace std;
class shape
{
public:
    virtual get_area()
    {
        return 0;
    }
    virtual get_perimeter()
    {
        return 0;
    }
};
class circle : public shape
{
    double radius;
public:
    c(double r) : radius(r)
    {

    }
    get_perimeter()
    {
        return 2*pi*radius;
    }
    get_area()
    {
        return pi*radius*radius;
    }

};

int main()
{
    shape *s;
    circle c(5.5);
    s=&c;
  cout<<s->get_area();
}

