#include<bits/stdc++.h>
using namespace std;
int ind[255],p[255],l[255],c=1;
int main()
{
    string s,d;
    cin>>s>>d;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==d[i])
        {
            l[s[i]]+=1;
        }
        if((s[i]!=d[i])&&(!ind[s[i]]))
        {
            if(l[s[i]]||l[d[i]])
            {
                cout<<"-1";return 0;
            }
            for(int j=i+1;j<d.length();j++)
            {
                if(s[j]==s[i]&&d[j]!=d[i])
                {
                    cout<<"-1";return 0;
                }
                if(s[j]==d[i]&&d[j]!=s[i])
                {
                    cout<<"-1";return 0;
                }
                if(d[j]==d[i]&&s[j]!=s[i])
                {
                    cout<<"-1";return 0;
                }
                if(d[j]==s[i]&&s[j]!=d[i])
                    {
                    cout<<"-1";return 0;
                }
            }
            ind[s[i]]=c;
            ind[d[i]]=c;
            c++;
        }
    }
    if(!c)
    {
        cout<<"0";return 0;
    }
    cout<<c-1<<endl;
    for(int i=0;i<s.length();i++)
    {
        if(ind[s[i]])
        {
            for(int j=0;j<255;j++)
            {
                if(ind[j]==ind[s[i]]&&j!=(int )s[i])
                {
                    cout<<s[i]<<"\t"<<(char)j<<endl;
                    ind[j]=0;
                }
            }
        }
    }
}
