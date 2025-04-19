#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cout <<"Enter the value of a and b:";
    cin>>a>>b;
    float sum = a+b;


    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<setw(25)<<"Sum is: "<<sum<<endl;
    float sub = a-b;
    cout<<setw(25)<<"Substraction is: "<<sub<<endl;
    float mul = a*b;
    cout<<noshowpoint;
    cout<<setw(25)<<"Multiple is: "<<mul<<endl;
    float divi= (float)a/b;
    cout<<setw(25)<<"Division is: "<<divi<<endl;
    getch();
}
