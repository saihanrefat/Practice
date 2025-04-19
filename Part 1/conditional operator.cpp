/*#include<iostream>
using namespace std;
int main()
{
    int num1=20,num2=29;
    int max= num1>num2?num1:num2;
    cout<<max;
   return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1,s2;
   cin>>s1>>s2;
   for(int i=0;i<s1.size();i++)
   {
       s1[i]=towlower(s1[i]);
       s2[i]=towlower(s2[i]);
   }

       if(s1==s2)
       {
           cout<<"0";

       }
       else
       {
          for(int i=0;i<s1.size();i++)
          {
               if(s1[i]>s2[i])
           {
               cout<<"1";
               break;
           }
           if(s1[i]<s2[i])
           {
               cout<<"-1";
               break;
           }
          }
       }
   return 0;
}

