#include<cstdio>
#include<iostream>
using namespace std;
int arr[26];
int main()
{
    string s;
    int k=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2)
        {
            k++;
        }
    }
    if(!k||k%2){cout<<"First";return 0;}
    else
    {
        cout<<"Second"; return 0;
    }
}
