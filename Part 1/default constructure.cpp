#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void out()
    {
         cout<<id<<" "<<gpa<<endl;

    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout<<"There is no value"<<endl;
    }
};
int main()
{
   student refat(02,4.56);
   student tmm(01,5.00);
   refat.out();
   tmm.out();
  student saihan;


    return 0;
}


