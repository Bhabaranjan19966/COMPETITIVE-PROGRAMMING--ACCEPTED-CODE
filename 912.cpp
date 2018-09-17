#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maxXorSum(ll n, ll k)
{

    if (k == 1)
        return n;


    ll res = 1;
    while (res <= n)
        res <<= 1;


    return res - 1;
}


int main()
{
    ll n, k ;
    cin>>n>>k;
    cout << maxXorSum(n, k);
    return 0;
}
