#include<iostream>
using namespace std;
class a
{
public:
    int x;
    a(int c)
    {
        x=c;
        cout<<"Base class"<<endl;
    }
};
class b
{
public:
    int x;
    b(int c)
    {
        x=c;
        cout<<"Base  b class"<<endl;
    }
};
class c :protected a,private b
{
public:
    int x;
    c(int c):a(c),b(c)
    {
        x=c;
        cout<<"Base class"<<endl;
    }
};
int main()
{
    c o(5);
}
