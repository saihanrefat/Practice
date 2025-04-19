#include <iostream>
using namespace std;
int main()
{
    int n,a[100],count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(int i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
        {
            int temp=a[i+1];
            a[i]=temp;
            a[i+1]=a[i];
            count++;
        }
    }
    printf("%d",count);
}
