#include<iostream>
using namespace std;
class student
{
    string name;
    float marks,parcentage;
public:
    void read()
    {
        cout<<"Enter name and marks:"<<endl;
        cin>>name>>marks;
    }
    void calculate()
    {
      parcentage=marks/6;
    }
    void average(student s[],int n)
    {
        int sum=0;
        float aver;
        for(int i=0;i<n;i++)
        {
            sum=sum+s[i].parcentage;
        }
        aver=sum/n;
        cout<<"Average per person is:"<<aver;
    }
};
int main()
{
    student s[3];
    for(int i=0;i<3;i++)
    {
        s[i].read();
        s[i].calculate();
    }
    s[0].average(s,3);
}
