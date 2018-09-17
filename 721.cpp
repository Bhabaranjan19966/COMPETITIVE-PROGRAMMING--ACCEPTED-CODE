#include<iostream>
#include<string.h>
using namespace std;
int a[101];
int main()
{
    int n,k,time=0;
    cin>>n>>k;
    char arr[n][101];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a[strlen(arr[i])]++;

    }
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        time+=a[i];
    }
    cout<<(time+(time/k)*5+1)<<"\t"<<(time+a[s.length()]+((time+a[s.length()]-1)/k)*5);
}
