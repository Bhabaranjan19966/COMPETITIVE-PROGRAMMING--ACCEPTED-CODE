#include<bits/stdc++.h>
using namespace std;
int visit[101];
int ax[101];
int ay[101];
long long  i,x,y,a,pc;
void dfs(int x)
{
    if(visit[x]) return;
    visit[x]=1;
    for(int i=1;i<=pc;i++)
    {
        if((ax[x]>ax[i])&&(ax[x]<ay[i])){dfs(i);}
        else if((ay[x]>ax[i])&&(ay[x]<ay[i])){dfs(i);}
        else {continue;}
    }
}
int main()
{
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>x>>y;
        if(a==1)
        {
            pc++;
            ax[pc]=x;
            ay[pc]=y;
        }
        else
        {
            memset(visit,0,sizeof(int)*101);
            dfs(x);
            if(visit[y]){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
    }
}
