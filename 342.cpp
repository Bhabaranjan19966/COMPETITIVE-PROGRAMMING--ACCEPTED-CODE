#include <iostream>
using namespace std;
int t[100010], l[100010], r[100010];
int main()
{
	int n, m, s, f;
	cin >> n >> m >> s >> f;
	for (int i = 0; i < m; i++)
		cin >> t[i] >> l[i] >> r[i];
	int dir;
	char ch;
	if (s < f)
		dir = 1, ch = 'R';
	else
		dir = -1, ch = 'L';
	int k = 0;
	for (int i = 1; s != f; i++)
	{
		if (t[k] == i)
		{
			if ((s < l[k] && s + dir < l[k]) || (s > r[k] && s + dir > r[k]))
			{
				s += dir;
				cout << ch;
			}
			else
				cout << 'X';
			k++;
		}
		else
		{
			s += dir;
			cout << ch;
		}
	}
	cout << endl;
}
