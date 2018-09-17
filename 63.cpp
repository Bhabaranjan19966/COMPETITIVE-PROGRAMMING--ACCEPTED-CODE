#include"bits/stdc++.h"
using namespace std;
int h[101];
queue<int >q;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,temp,ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        h[temp]++;
    }
    if(h[k]==n){cout<<"0";return 0;}
    if(n==1){cout<<k-temp;return 0;}
    while(h[k]!=n)
    {
        ans++;
        for(int i=1;i+1<=k;i++)
        {
            if(h[i])
            {
                h[i]--;
               q.push(i);
            }
        }
        while(!q.empty())
        {
            h[q.front()+1]++;
            q.pop();
        }
    }
    cout<<ans;return 0;
}
