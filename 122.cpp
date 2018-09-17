#include<bits/stdc++.h>
using namespace std;
vector< int > adj[10];
int main()
{
    string s;
    int l;
    cin>>s;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        adj[s[i]-'0'].push_back(i);
    }
    if(adj['4'-'0'].size()==0&&adj['7'-'0'].size()==0)
    {
        cout<<"-1"; return 0;
    }
    if(adj['4'-'0'].size()>=adj['7'-'0'].size())
    {
        cout<<"4";return 0;
    }
    else
    {
        cout<<"7"; return 0;
    }
}
