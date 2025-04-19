#include<iostream>
using namespace std;
class student
{
public:
    void display()const;
    void display1();
};
void student :: display()const
{
    cout<<"Constant function"<<endl;
}
void student :: display1()
{
    cout<<"Non_C=constant function"<<endl;
}
int main()
{

    const student ob1;
    ob1.display();
    student ob2;
    ob2.display1();


    return 0;
}
