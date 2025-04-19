#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
   student refat,tmm;
   refat.id=02;
   refat.gpa=4.56;
   tmm.id=01;
   tmm.gpa=5.00;
   cout<<refat.id<<" "<<refat.gpa<<endl;
   cout<<tmm.id<<" "<<tmm.gpa<<endl;


    return 0;
}
