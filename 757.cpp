#include<bits/stdc++.h>
using namespace std;
map <int ,int > freq;
int main()
{
    int n,stn,root;
    cin>>n;
    while(n--)
    {
        cin>>stn;
        root=floor(sqrt(stn));
        for(int i=2;i<=root;i++)
        {
            if(!(stn%i)){freq[i]++;}
            while(stn%i==0)
            {
                stn/=i;
            }
        }
        if(stn>1){freq[stn]++;}
    }
    int ans=1;
    for(map<int ,int>::iterator it=freq.begin();it!=freq.end();it++)
    {
        ans=max(ans,(*it).second);
    }
    cout<<ans;
}
