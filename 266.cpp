#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    string s,a;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);j++;
            }
        }
    }
    cout<<s;
}
