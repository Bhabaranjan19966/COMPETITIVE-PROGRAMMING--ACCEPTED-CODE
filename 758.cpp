#include<bits/stdc++.h>
using namespace std;
int need[4];
int main()
{
    int arr[4];
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if((int(s[i]))!=33)
        {
            arr[i%4]=s[i];
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='!')
        {
            need[i%4]++;
        }
    }
    int r,b,g,y;
    for(int i=0;i<4;i++)
    {
        if(arr[i]=='R')
        {
            r=i;
        }if(arr[i]=='B')
        {
            b=i;
        }if(arr[i]=='G')
        {
            g=i;
        }if(arr[i]=='Y')
        {
            y=i;
        }
    }
    cout<<need[r]<<" "<<need[b]<<" "<<need[y]<<" "<<need[g];
}
