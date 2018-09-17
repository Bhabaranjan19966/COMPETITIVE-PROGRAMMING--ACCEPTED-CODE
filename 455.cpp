
#include <iostream>
using namespace std;
long long n, t, v[100009],mx;
int main() {
cin >> n;
mx=-1;
for (int i=0;i<n;i++) {cin>>t;++v[t];mx=max(mx,t);}
for (int i=2;i<=mx;i++)
    {
     v[i] = max(v[i-1], v[i-2]+v[i]*i);
    }
cout << v[mx];
}
