#include<iostream>
using namespace std;
class test
{
    int in;
    float fn;
public:
    test ()
    {
        in=0;
        fn=0.0;
    }
    int gn()
    {
        return in;
    }
    float gn(int a)
    {
        return fn;
    }
};
int main()
{
    test ob;
    ob.gn();
    return 0;
}
