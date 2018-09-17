#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long int n)
{
    if ( n == 1 ) return false;
    if ( n == 2 ) return true;
    if ( n%2 == 0 ) return false;
    for ( int i = 3; i * i <= n; i += 2 )
        if ( n%i == 0 ) return false;
    return true;
}
int main()
{
    int n,c=0;
    bool val=true;
    scanf("%d",&n);
    long long int arr[n],hold,a,b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        hold=sqrt(arr[i]);val=true;
        if(hold*hold==arr[i])
        {
        if(is_prime(hold)){printf("YES\n");}
        else{printf("NO\n");}
        }
        else{printf("NO\n");}
    }
}
