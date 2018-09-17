#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,a,b,v=0,ans=0,f;
    bool val=true;
    cin>>n>>m;
    vector<int>adj[n+1];
    queue<int >q;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
        adj[a].push_back(b);
        adj[b].push_back(a);
        v=max(arr[a],arr[b]);
    }
    for(int i=0;i<n;i++)
    {
        val=true;
        for(int j=1;j<n+1;j++)
        {
            if(arr[j]==1)
            {
                arr[j]--;
                q.push(j);
                val=false;
            }
        }
        while(!q.empty())
        {
            f=q.front();
            q.pop();
            for(int k=0;k<adj[f].size();k++)
            {
                arr[adj[f][k]]--;
            }
        }
        if(!val){ans++;}
        else{break;}
    }
    cout<<ans;
}
