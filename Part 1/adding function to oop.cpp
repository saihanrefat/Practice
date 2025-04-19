#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
     void display()
     {
         cout<<id<<" "<<gpa<<endl;
     }
};
int main()
{
   student refat,tmm;
   refat.id=02;
   refat.gpa=4.56;
   refat.display();

   tmm.id=01;
   tmm.gpa=5.0;
   tmm.display();


    return 0;
}

