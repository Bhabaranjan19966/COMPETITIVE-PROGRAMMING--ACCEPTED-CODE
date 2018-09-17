#include<cstdio>
#include<iostream>
using namespace std;
int ar[26],br[26];
int main()
{
    string a,b;
    int ans=0;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        ar[a[i]-'a']++;
    }
    for(int i=0;i<b.length();i++)
    {
        br[b[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(ar[i]==0&&br[i]>0        )
		{
			printf("-1");
			return 0;
		}
        ans+=min(ar[i],br[i]);
    }

    printf("%d",ans);return 0;
    ;
}
