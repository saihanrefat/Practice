#include<bits/stdc++.h>
using namespace std;
class person
{
public:

    int id;
    string name;
    float cgpa;
    void display()
    {
        cout<<name<<endl<<id<<endl<<cgpa<<endl;
    }
};
class student :  public person
{
public:

    int roll;
    void display1()
    {
        cout<<roll<<endl;
        display();
    }
};
int main()
{
    student refat;
    refat.roll=01;
   refat.name= "Saihan";
    refat.cgpa= 3.86;
    refat.id=002;
   refat.display1();



    return 0;
}
