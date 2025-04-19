#include<iostream>
using namespace std;
class media
{
protected:
    string title;
    string publication;
public:
    media(string ti,string pu)
    {
        title=ti;
        publication =pu;
    }
    virtual void read()
    {

    }
    virtual void show()
    {

    }
};
class book:public media
{
public:
    int page;
    book(string t,string p,int pa):media(t,p)
    {
        page=pa;
    }
   void read()override
    {
        cout<<"Reading book "<<title<<"with"<<page;
    }
   void show()override
    {
        cout<<"The title is:"<<title<<endl;
        cout<<"The publication is "<<publication<<endl;
        cout<<"The page number is "<<page<<endl;
    }

};
int main()
{
    media *m;
    book b("sikk","fffggh",78);
    m=&b;
    m->show();
}
