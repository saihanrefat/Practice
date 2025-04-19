#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
    cin>>p>>q;
  int a1[p],a2[q],sum=0,a3[p+q];
  for(int i=0;i<p;i++)
  {
      cin>>a1[i];
  }
  for(int i=0;i<q;i++)
  {
      cin>>a1[i];
  }
 for(int i=0;i<p;i++)
  {
     a3[i]=a1[i];
  }
  for(int i=0;i<q;i++)
  {
     a3[p+i]=a2[i];
  }
sort(a3,a3+(p+q));
  for(int i=0;i<p+q;i++)
  {
      if( a3[i]==n)
       {
         sum=1;
       }

  }
  if(sum==1)
  {
      cout<<"I become the guy.";
  }
  else
    cout<<"Oh, my keyboard!";
    return 0;
}
