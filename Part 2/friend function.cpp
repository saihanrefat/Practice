#include<iostream>
using namespace std;
class external;
class inter
{
    int dm,oop,chem;
public:
    void read()
    {
        cout<<"Enter the dm,oop,and chem marks:"<<endl;
        cin>>dm>>oop>>chem;
    }

    friend void sum(inter i, external e);
};
class external
{
    int dm,oop,chem;
public:
    void read()
    {
        cout<<"Enter the external marks of dm,oop,and chem marks:"<<endl;
        cin>>dm>>oop>>chem;
    }
    friend void sum(inter i, external e);
};
void sum(inter i, external e)
{

    i.dm=i.dm+e.dm;
    i.oop=i.oop+e.oop;
    i.chem=i.chem+e.chem;

        cout<<"DM total marks:"<<i.dm<<endl<<"OOP total marks is:"<<i.oop<<endl<<"Chemistry total marks is:"<<i.chem<<endl;


}
int main()
{
    inter i,k;
    external e;
    i.read();
    e.read();
    sum(i,e);
}
