#include <iostream>
using namespace std;
long long p,d,ans,t;
int main(){
    cin>>p>>d;
    ans=++p;
    for(t=10;;t*=10){
        if(p%t>d) {break;}
        ans=p-p%t;
    }
    cout<<ans-1;
}//219b
