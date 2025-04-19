#include<iostream>
using namespace std;
template<class refat1,class refat2>
refat1 add(refat1 a,refat2 b)
{
    return a+b;
}
int main()
{
    cout<<add(10,20)<<endl;
     cout<<add(10,20.5)<<endl;
      cout<<add(10.334,20.90)<<endl;
      return 0;
}

