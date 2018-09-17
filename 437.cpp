#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int s,l,v=0,temp=-1,m;
    cin>>s>>l;
    vector<int >b;
    for(int i=l;i>0;i--)
    {
        m=i;
        if(v==s){break;}
        if(m&1&&v<s)
        {
            v+=1;
            b.push_back(m);
        }
        else
        {
            temp=0;
            while(!(m&1))
            {
                m/=2;
                temp++;
            }
            temp=pow((double)2,temp);

            if((v+temp)<=s){v+=temp;b.push_back(i);}
        }
    }
    if(v!=s){cout<<"-1";return 0;}
    cout<<b.size()<<"\n";
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }return 0;
}
