
#include<bits/stdc++.h>
using namespace std;
class item
{
    int number;
    float cost;
public:
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"Number:"<<number<<endl;
        cout<<"Cost:"<<cost<<endl;
    }
};
void item :: getdata(int a,float b)
{
    number =a;
    cost = b;
}
int main()
{
    item x;
    x.getdata(100,50);
    x.putdata();
}
