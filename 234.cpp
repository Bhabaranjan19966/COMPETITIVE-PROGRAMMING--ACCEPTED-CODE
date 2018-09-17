#include<bits/stdc++.h>
#define S scanf
#define P printf
#define x first
#define y second
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,k,temp;
    S("%d%d",&n,&k);
    pair<int ,int >p[n];
    for(int i=0;i<n;i++)
    {
        S("%d",&temp);
        p[i]=make_pair(temp,i);
    }
    sort(p,p+n);
    reverse(p,p+n);
    int ans=102;
    for(int i=0;i<k;i++)
    {
        ans=min(ans,p[i].x);
    }
    P("%d\n",ans);
    for(int i=0;i<k;i++)
    {
        P("%d ",p[i].y+1);
    }

}
