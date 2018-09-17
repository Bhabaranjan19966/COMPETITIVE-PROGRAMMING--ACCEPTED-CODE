#include<bits/stdc++.h>
using namespace std;
int arr[26];
int main()
{
    int k,l;
    long long int ans=0;
    string s;
    cin>>s>>k;
    l=s.length();
    for(int i=0;i<26;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<l;i++)
    {
        ans+=((i+1)*arr[s[i]-'a']);
    }
    sort(arr,arr+26);
    for(int i=l+1;i<=l+k;i++)
    {
        ans+=(i*arr[25]);
    }
    cout<<ans;
}
