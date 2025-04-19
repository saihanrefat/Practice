#include<iostream>
using namespace std;
class student
{
public:
    student();
    ~student();
    void display();
};
student :: student()
{
    cout<<"Constructor is called"<<endl;
}
student :: ~student()
{
    cout<<"Destructor is called"<<endl;
}
void student :: display()
{
    cout<<"Display function is called"<<endl;
}
int main()
{
    student refat;
    refat.display;
    return 0;
}
