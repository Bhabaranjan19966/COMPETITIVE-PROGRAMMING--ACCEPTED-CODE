#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,c;
    cin>>n>>m;
    c=(m+1)/2;
    while(n)
    {
        l=r=c;
        if(m&1){
        for( ;(l!=0)||(r!=(m+1)); )
        {
            if(l==r&&n){cout<<l<<"\n";l--;r++;n--;}
            if(l!=0&&n){cout<<l--<<"\n";n--;}
            if(r!=(m+1)&&n){cout<<r++<<"\n";n--;}
            if(!n){break;}
        }
        }
        else{
        for( ;(l!=0)||(r!=(m+1)); )
        {
            if(l==r&&n){cout<<l<<"\n";l--;r++;n--;}
            if(r!=(m+1)&&n){cout<<r++<<"\n";n--;}
            if(l!=0&&n){cout<<l--<<"\n";n--;}
            if(!n){break;}
        }
        }

    }
}
