#include<bits/stdc++.h>
using namespace std;
vector<long long >v;
vector<long long>r;
int main()
{
    ios_base::sync_with_stdio(false);
    long long n,k,s,sum,last_ind=0,cnt=0;
    cin>>s>>k;
    v.push_back(1);
    sum=1;
    n=k;
    for(long long i=k+1;v[v.size()-1]<=s;i++)
    {
        v.push_back(sum);
        if(s==sum){cout<<"2\n0 "<<sum;return 0;}
        sum+=v[v.size()-1];
        if(sum>s){break;}
       if(i>=2*k)
       {
           sum-=v[last_ind];
        last_ind++;
        }
    }
    sum=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if((v[i]+sum)<=s)
        {
            r.push_back(v[i]);
           sum+=v[i];
           if(sum==s){break;}
        }
    }
    cout<<r.size()<<"\n";
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }
}
