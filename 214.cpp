#include<bits/stdc++.h>
using namespace std;
int ind=-1;
void pz()
{
    for(int i=0;i<=ind;i++){cout<<"0";}
}
int main()
{
    int n,m=0,cnt=0;
    cin>>n;
    int arr[n];
    bool val=true;
    for(int i=0;i<n;i++){cin>>arr[i];m+=arr[i];}
    sort(arr,arr+n);
    if(arr[0]){cout<<"-1";return 0;}
    for(int i=0;i<n;i++)
    {
        if(!arr[i]){ind=i;}
        else{break;}
    }
    if(!(m%3))
    {
       if(m){ for(int i=n-1;i>=0;i--){cout<<arr[i];}}
       else{cout<<"0";}
        return 0;
    }
    else if((m%3)==1)
    {
        int cl[n];
        memset(cl,0,sizeof(int)*n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]%3==1)
            {
                cl[i]=1;val=false;m-=arr[i];break;
            }
        }
        if(val)
        {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%3==2)
            {
                cl[i]=1;cnt++;m-=arr[i];
                if(cnt==2){val=false;break;}
            }
        }
        }

         if(!val&&!(m%3))
        {
            if(m){for(int i=n-1;i>ind;i--){if(!cl[i])cout<<arr[i];}
            pz();}
            else
            {cout<<"0";}return 0;}
        else
        {
            cout<<"0";return 0;
        }
    }
    else
    {
        int cl[n];
        memset(cl,0,sizeof(int)*n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]%3==2)
            {
                cl[i]=1;val=false;m-=arr[i];break;
            }
        }
        if(val)
        {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%3==1)
            {
                cl[i]=1;cnt++;m-=arr[i];
                if(cnt==2){val=false;break;}
            }
        }
        }
        if(!val&&!(m%3))
        {
            if(m){for(int i=n-1;i>ind;i--){if(!cl[i])cout<<arr[i];}
            pz();}
            else
            {cout<<"0";}return 0;
        }
        else
        {
            cout<<"0";return 0;
        }
    }
}
