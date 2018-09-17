#include<bits/stdc++.h>
using namespace std;
int a,b,i=1,j=1,k,x;
void p(){
   if(i%2)
   if(j!=b){

     cout<<2<<" "<<i<<" "<<j;
     j++;
     cout<<" "<<i<<" "<<j<<"\n";j++;
     if(j>b)j=b,i++;
   }
   else{
    cout<<2<<" "<<i<<" "<<j<<" ";
    ++i;
    cout<<i<<" "<<j<<"\n";
    j--;
   }
   else{
    if(j!=1){
        cout<<2<<" "<<i<<" "<<j;
        j--;
        cout<<" "<<i<<" "<<j<<"\n";j--;
        if(j<1) j=1,i++;
    }
    else{
        cout<<2<<" "<<i<<" "<<j<<" ";
        ++i;
        cout<<i<<" "<<j<<"\n"; j++;
    }
   }

}
void q(){
    bool v=1;
    cout<<(a*b)-((x-1)*2)<<" ";
    for(int c=i;c<=a;c++){
        if(c%2){
            if(!v)j=1;
            v=0;
            for( ;j<=b;j++){
                cout<<c<<" "<<j<<" ";
            }
        }
        else{
            if(!v) j=b;
            v=0;
            for(;j>0;j--){
                cout<<c<<" "<<j<<" ";
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>a>>b>>k;
    x=k;
    while(k){
        if(k!=1){
            p();k-=1;
        }
        else{
            q();k=0;
        }
    }
}
