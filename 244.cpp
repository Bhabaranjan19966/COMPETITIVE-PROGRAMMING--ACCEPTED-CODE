#include<bits/stdc++.h>
using namespace std;
long long int n,ans,temp,c;
int arr[10];bool val;
void dfs(long long num)
{
    if(num>0&&num<=n){ans++;}
    if(num>=100000000){return;}
    for(int i=0;i<10;i++)
    {
        if(num*10+i>0)
        {
            temp=num*10+i;c=0;val=true;
            memset(arr,0,sizeof(int)*10);
            while(temp){
                if(!arr[temp%10])
                {c++;
                if(c>2){val=false;break;}
                }
                arr[temp%10]++;temp/=10;
            }
            if(val){
                    dfs(num*10+i);
                }
        }
    }
}
int main()
{
    cin>>n;
    if(n==1000000000){ans++;}
    dfs(0);
    cout<<ans;
}
