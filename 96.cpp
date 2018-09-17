#include<bits/stdc++.h>
using namespace std;
vector <int>v;
bool isl(long long n)
{
    int a=0,b=0,c=0;
    while(n)
    {
        if((n%10)==4){a++;}
        else if((n%10)==7){b++;}
        else{a=0;b=1;break;}
        n/=10;
    }
    if(a==b)return true;
    else return false;
}
int main()
{
    long long n,c;
    cin>>n;
    c=n;
    while(c)
    {
        v.push_back(c%10);c/=10;
    }
    if(v.size()&1)
    {
        int l=ceil((double)v.size()/2);
        for(int i=0;i<l;i++)
        {
            cout<<"4";
        }
        for(int i=0;i<l;i++)
        {
            cout<<"7";
        }
    }
    else
    {
        if(n>=77774444){cout<<"4444477777";}
        for(long long i=n;i<=77774444;i++)
        {
            if(isl(i))
            {
                cout<<i;return 0;
            }
        }
    }
}
