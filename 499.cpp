#include<bits/stdc++.h>
using namespace std;
map<string , string>mp;
int main()
{
    int n,l;
    scanf("%d%d",&n,&l);
    string a,b,arr[n];
    for(int i=0;i<l;i++)
    {
        cin>>a>>b;
        mp[a]=b;
    }

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a.length()>mp[a].length())
        {
            arr[i]=mp[a];
        }
        else {arr[i]=a;}
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
}
