#include<bits/stdc++.h>
using namespace std;
int arr[255];
int main()
{
    int n,c=0,t,p,g,a;
    cin>>n;
    if((n<4)&&(!(n%4)))
    {
        cout<<"===";
    }
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]]+=1;
        if((c==0||(c<arr[s[i]]&&s[i]!='?')))
        {
            c=arr[s[i]];
        }
    }
    a=c-arr['A'];
    t=c-arr['T'];
    p=c-arr['C'];
    g=c-arr['G'];
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='?'){
        if(a)
            {
                arr['?']--;
                s[i]='A';
                a--;
            }
            else if(t)
            {
                arr['?']--;
                s[i]='T';
                t--;
            }
            else if(p)
            {
                arr['?']--;
                s[i]='C';
                p--;
            }
            else
            {
                if(g){
                arr['?']--;
                s[i]='G';
                g--;
            }
    }}}
    if(arr['?'])
    {
        if(!(arr['?']%4))
        {
            a=t=p=g=(arr['?']/4);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='?')
        {

            if(a)
            {
                arr['?']--;
                s[i]='A';
                a--;
            }
            else if(t)
            {
                arr['?']--;
                s[i]='T';
                t--;
            }
            else if(p)
            {
                arr['?']--;
                s[i]='C';
                p--;
            }
            else
            {
                if(g){
                arr['?']--;
                s[i]='G';
                g--;
            }
        }}}}
        else{
            cout<<"===";return 0;
        }
    }
    if(a|p|t|g)
    {
        cout<<"===";return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        if(s[i]=='C')
        {
            c++;
        }
        if(s[i]=='T')
        {
            t++;
        }

        if(s[i]=='G')
        {
            g++;
        }
    }
for(int i=0;i<s.length();i++)
{
    cout<<s[i];
}

}
