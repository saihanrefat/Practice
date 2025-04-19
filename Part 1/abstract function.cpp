#include<bits/stdc++.h>
using namespace std;
class MobileUser
{
public:
    void ami()
    {
        cout<<"I am not a robot"<<endl;
    }
    virtual void sendmessage()=0;
};
class Refat : public MobileUser
{
public:
    void sendmessage()
    {
        cout<<"I am a Refat"<<endl;
    }
};
class Tmm : public MobileUser
{
public:
    void sendmessage()
    {
        cout<<"I am a Tmm"<<endl;
    }
};
int main()
{
    MobileUser *a;
    Refat R;
    Tmm T;
    a=&R;
    a->sendmessage();
    a->ami();
    a=&T;
    a->sendmessage();


    return 0;
}


