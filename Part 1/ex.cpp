#include<iostream>
using namespace std;
int main()
{
    int n,a,k[100],s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        int k[a];
        for(int j=0;j<a;j++)
        {
            cin>>k[a];
        }
        for(int i=0;i<a-1;i++)
        {
            s=k[i]-k[i+1];
        if(s<=1)
            {
                i=i+1;
                continue;
            }
           else
            {
                cout<<"NO"<<endl;
            }
        }
    }



    return 0;
}
