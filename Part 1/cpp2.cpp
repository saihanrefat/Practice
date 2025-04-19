#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
  sort(a,a+n);
 int sum=0,sum1=0;
   for(int i=n-1;i>=0;i--)
   {
       sum=sum+a[i];
       i--;
        sum1=sum1+a[i];
        i--;

   }
   cout<<sum<<" "<<sum1;
    return 0;
}

