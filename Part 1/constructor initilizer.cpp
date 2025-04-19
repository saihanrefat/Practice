#include<iostream>
using namespace std;
class student
{
public:
   const int admissionfee;
   const int examfee;
    student(int x,int y)
    :admissionfee(x),examfee(y)
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
 student s1(1200,1300);

    return 0;
}
