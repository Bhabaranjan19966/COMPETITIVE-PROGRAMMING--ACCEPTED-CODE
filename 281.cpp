#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double x,y,cm,m=100000000,v;
    ll a,b,i,l=0,n,r=100001,mid,ma,mb;
    cin>>x>>y>>n;
    v=x/y;
    for(i=1;i<=n;i++)
    {
        l=0;
        r=100001;
        while(r-l>1)
        {
            mid=(l+r)/2;
            if((double)mid/i<v)l=mid;
            else r=mid;
        }
        if(abs(v-((double)l/i))<=abs(v-((double)r/i)))
        {
            cm=abs(v-((double)l/i));
            a=l;
            b=i;
        }
        else{
            cm=abs(v-((double)r/i));
            a=r;
            b=i;
        }
        if(m>cm)
        {
            m=cm;
            ma=a;
            mb=b;
        }
    }
    cout<<ma<<"/"<<mb;
}
