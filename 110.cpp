#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string s="abcdabcd";
    for(int i=0;i<n;i++)
    {
        printf("%c",s[i%8]);
    }
    return 0;
}
