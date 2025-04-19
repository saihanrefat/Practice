#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int x;
 cout<<"Enter any integer number: ";
 cin>>x;
if(x>100 ||x<0)
{
    cout<<"Invalid number";
}
else if(x>=80 && x<=100)
{
    cout<<"A+";
}
else if(x>=70 && x<=79)
{
    cout<<"A";
}
else if(x>=60 && x<=69)
{
    cout<<"A-";
}
else if(x>=50 && x<=59)
{
    cout<<"B";
}
else if(x>=40 && x<=49)
{
    cout<<"c";
}
else
    cout<<"Fail";
    getch();
}

