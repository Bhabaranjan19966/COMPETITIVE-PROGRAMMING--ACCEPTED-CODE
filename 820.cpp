#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ans;
    double fa,ia,ta=0,mi=100000000;
    cin>>n>>a;
    fa=(180*((double)n-2))/n;
    ia=fa/(n-2);
    for(int i=3;i<=n;i++)
    {
        ta+=ia;
        if(abs(ta-a)<mi)ans=i,mi=abs(ta-a);
    }
        cout<<2<<" "<<1<<" "<<ans;
}

