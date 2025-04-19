#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
      string s1;
      cin>>s1;
      int length=s1.size();
      if(length%2 !=0)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          int sum=0;
          for(int i=0;i<length/2;i++)
          {
              if(s1[i] !=s1[(length/2)+i])
              {
                  sum=1;
              }
          }
          if(sum==0)
          {
              cout<<"YES"<<endl;
          }
          else
            cout<<"NO"<<endl;
      }

    }
    return 0;
}
