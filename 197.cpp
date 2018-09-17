#include"bits/stdc++.h"
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int n,m,ip=-1,iq=-1;
    cin>>n>>m;
    int p[n+1],q[m+1];
    for(int i=0;i<n+1;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<m+1;i++)
    {
        cin>>q[i];
    }

    if(n>m)
    {
            if((p[0]>0&&q[0]>0)||(p[0]<0&&q[0]<0)){
                cout<<"Infinity";return 0;
            }
            else{cout<<"-Infinity";return 0;}
    }
    else if(m>n)
    {
        cout<<"0/1";return 0;

    }
    else
    {
      if((p[0]>0&&q[0]>0)||(p[0]<0&&q[0]<0))
      cout<<p[0]/gcd(p[0],q[0])<<"/"<<q[0]/gcd(p[0],q[0]);
      else cout<<"-"<<max(p[0]/gcd(p[0],q[0]),-1*p[0]/gcd(p[0],q[0]))<<"/"<<max(q[0]/gcd(p[0],q[0]),q[0]/gcd(p[0],q[0])*-1);
    }
}
