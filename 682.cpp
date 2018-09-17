#include<iostream>
using namespace std;
int main()
{
    long long int n,m,ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        ans+=(m+(i%5))/5;
    }
    cout<<ans;
}
