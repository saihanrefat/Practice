#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n,x,g,maxi,y,t;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       maxi=0;
       for(int j=1;j<x;j++)
       {
          g=__gcd(x,j)+j;
          if(g>maxi)
          {
              maxi=g;
              y=j;
          }
       }
       cout<<y<<endl<<endl;
   }



    return 0;
}
