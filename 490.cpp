#include <bits/stdc++.h>

using namespace std;

int md [1000010];
int main()
{
	string s;
	int a,b,lm= 0,p1= 1;
	cin >> s >> a >> b;
	
	md[0] = (s[0]-'0')%a;
	int n = s.size();
	for (int i = 1; i < n; i++) md[i] = (10*md[i-1]+s[i]-'0')%a;
	while (--n)
	{
		lm += p1*(s[n]-'0');
		lm %= b;
		if (!md[n-1] && !lm && s[n] != '0')
		{
			puts("YES");
			cout << s.substr(0,n) << endl << s.substr(n) << endl;
			return 0;
		}
		p1 = (p1*10)%b;
	}
	puts("NO");
}