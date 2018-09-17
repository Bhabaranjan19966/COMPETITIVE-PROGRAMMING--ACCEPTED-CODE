#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int fre[d][2],ans=0,temp=0;
    for(int i=0;i<d;i++)
    {
        cin>>fre[i][0]>>fre[i][1];
    }
    for(int i=0;i<d;i++)
    {
        temp=0;
        for(int j=(fre[i][0]-1);j<fre[i][1];j++)
        {
            temp+=arr[j];
        }
        if(temp>0){ans+=temp;}
    }
    cout<<ans;

}
