#include<bits/stdc++.h>
using namespace std;
int arr[255];
int main()
{
    set<string>s;
    int ans=0;
    string p,d;
    cin>>p;
    d=p;
    s.insert(p);
    for(int i=0;i<p.length();i++)
    {
        d=d.substr(1)+d[0];
        s.insert(d);
    }
    cout<<s.size();
}
