#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a=0,k=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        ans+=max(0ll,a-k);
        a=k;
    }
    cout<<ans;

}
