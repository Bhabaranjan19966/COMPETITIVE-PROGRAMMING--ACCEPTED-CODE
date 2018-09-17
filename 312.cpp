#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a, b, c, d, ps, pz, r, res;
	cin >> a >> b >> c >> d;
	ps = a / b;
	pz = c / d;
	r = (1 - ps) * (1 - pz);
	res = ps / (1 - r);
	printf("%.12f\n", res);
  return 0;
}
