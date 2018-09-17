#include<bits/stdc++.h>
using namespace std;
int one[26],cpy[26];
vector<pair<int,int> >adj[26];
int main()
{
    string a,b;
    int l,m;
    cin>>a>>b;
    l=a.length();
    m=b.length();
    if(l<m)
    {
        printf("need tree");return 0;
    }
    for(int i=0;i<l;i++)
    {
        one[a[i]-'a']++;
        adj[a[i]-'a'].push_back(make_pair(i,0));
    }
    for(int i=0;i<m;i++)
        {
            cpy[b[i]-'a']++;
        }
        if(l==m)
        {
            bool val=true;
            for(int i=0;i<26;i++)
            {
                if(one[i]!=cpy[i])
                {
                          val=false;break;
                }
            }
            if(val)
            {
                printf("array");return 0;
            }
            printf("need tree");return 0;
        }
        else
        {
            bool val=true;int k=-1;
             for(int i=0;i<26;i++)
            {
                if(one[i]<cpy[i])
                {
                          val=false;break;
                }
            }
            if(!val){printf("need tree");return 0;}
            for(int i=0;i<m;i++)
            {
                val=false;
                for(int j=0;j<adj[b[i]-'a'].size();j++)
                {
                    if(adj[b[i]-'a'][j].first>k&&i<=adj[b[i]-'a'][j].first&&!(adj[b[i]-'a'][j].second))
                    {
                        adj[b[i]-'a'][j].second=1;
                        k=max(k,adj[b[i]-'a'][j].first);
                        val=true;
                        break;
                    }
                }
                if(!val){break;}
            }
                if(val)
                {
                    printf( "automaton");return 0;
                }
                else{ printf("both");return 0;}
            printf("need tree");return 0;
        }
}
