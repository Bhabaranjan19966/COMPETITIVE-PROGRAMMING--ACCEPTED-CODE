#include<bits/stdc++.h>
using namespace std;
int arr[101],prof[101];
int l[101],r[101], t[101],c[101];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    long long ttime=0,ans=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>t[i]>>c[i];
    }
    for(int i=1;i<=m;i++)
    {
        ttime=0;
        for(int j=l[i];j<=r[i];j++)
        {
            if(!arr[j]||t[i]<arr[j]){arr[j]=t[i];prof[j]=c[i];}
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans+=prof[i];
    }
    cout<<ans;
}
