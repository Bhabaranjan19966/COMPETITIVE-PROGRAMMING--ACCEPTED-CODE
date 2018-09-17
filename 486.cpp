#include<bits/stdc++.h>
using namespace std;
int f[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    int p,l;
    cin>>l>>p;
    string s;
    cin>>s;

    int ans=0;
    if(l==1){
        cout<<0;    return 0;
    }
    if(l==2){
        if(s[0]!=s[1]){
            ans+=min(abs(s[0]-s[1]),26-abs(s[0]-s[1]));
            cout<<ans;  return 0;
        }
        cout<<0;   return 0;
    }
    int c=0,change=0;
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            f[c]=i;;
            change+=min(abs(s[i]-s[l-1-i]), 26-abs(s[i]-s[l-1-i]));
            c++;
        }
    }
    if(!c){
        cout<<0;return 0;
    }
    if(l%2&&p==(l/2+1)) {
        ans+=1;p--;
    }
    else{
        if(l%2){
                int x;
             if(p>(l/2+1))
             {
                 p=abs((l/2+1)-p);
                p=(l/2+1)-p;
             }
        }
        else {
            if(p>l/2){
             p=abs((l/2)-p);
             p=(l/2)-max(0,(p-1));
            }
        }
    }
    --p;
    if(p<0){p=0;}
    c--;
    if(p<=0||p>=f[c]){

       if(p<=0) ans+=abs(f[c]-p);
       else ans+=abs(f[0]-p);
    }
    else {
        ans+=min(2*abs(f[c]-p)+abs(p-f[0]),2*abs(f[0]-p)+abs(p-f[c]));
    }
    ans+=change;
    cout<<ans;
}
