#include <cstdio>
#include <vector>
using namespace std;
vector<int> a, b;
int n, x, t;
long long ans;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		t = x > 0;
		if (x > 0) a.push_back(x);
		else b.push_back(-x);
		ans += x;
	}
	if (ans != 0) ans = ans > 0;
	else if (a > b) ans = 1;
	else if (a < b) ans = 0;
	else ans = t;
	printf("%s\n", ans? "first": "second");
	return 0;
}
