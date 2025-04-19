#include<iostream>
using namespace std;
template<class refat>
refat add(refat a,refat b)
{
    return a+b;
}
int main()
{
    cout<<add(10,20)<<endl;
     cout<<add(10.5,20.2)<<endl;
      cout<<add(10.334,20.90)<<endl;
      return 0;
}
