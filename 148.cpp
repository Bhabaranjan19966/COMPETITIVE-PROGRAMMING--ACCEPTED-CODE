#include<iostream>
#include<algorithm>
using namespace std;
int t[100001];
int main()
{
    int arr[5],d,j=1,r=0;
    for(int i=1;i<5;i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    for(int i=1;i<=4;i++)
    {
        while((arr[i]*j)<=d )
        {
            t[(arr[i]*j)]=1;
            j++;
        }
        j=1;
    }
     for(int i=1;i<=d;i++)
     {
         r+=t[i];
     }

    cout<<r;
}
