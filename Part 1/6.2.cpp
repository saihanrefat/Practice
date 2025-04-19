#include<iostream>
using namespace std;
class complex
{
    float x,y;
public:
    complex()
    {

    }
    complex(float a)
    {
        x=y=a;
    }
    complex( float a,float b)
    {
        x=a;
        y=b;
    }
    friend complex sum(complex c1,complex c2);
    friend void show(complex c);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
void show(complex c)
{
    cout<<c.x<<"+j"<<c.y<<endl;
}
int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex c;
    c=sum(A,B);
    cout<<"A=";
    show(A);
     cout<<"B=";
    show(B);
     cout<<"C=";
    show(c);
}
