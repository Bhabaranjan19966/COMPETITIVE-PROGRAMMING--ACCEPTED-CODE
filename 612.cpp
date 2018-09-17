#include<bits/stdc++.h>
#define opt ios_base::sync_with_stdio(0)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl cout<<"\n"
typedef long long ll;
/*---------end of temp--------- */
using namespace std;

int main()
{
    opt;
    stack<char>st;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if((s[i]=='{')||(s[i]=='[')||(s[i]=='<')||(s[i]=='(')){
            st.push(s[i]);
           }
        else{
            if(st.empty()){
                cout<<"Impossible";return 0;
            }
            else{
             if(st.top()=='('&&s[i]!=')'){
                ans++;
             }
             else if(st.top()=='{'&&s[i]!='}'){
                ans++;
             }
             else if(st.top()=='['&&s[i]!=']'){
                ans++;
             }
             else if(st.top()=='<'&&s[i]!='>'){
                ans++;
             }

             st.pop();
            }
        }
    }

    if(st.empty()){
                cout<<ans;
            }
            else{
                cout<<"Impossible";
            }

}
