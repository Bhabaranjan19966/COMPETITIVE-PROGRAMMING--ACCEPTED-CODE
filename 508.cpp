#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int pos = -1;
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] - '0') % 2 == 0)
		{
			pos = i;
			if (str[str.size() - 1] > str[i])
			{
				swap(str[i], str[str.size() - 1]);
				cout << str << endl;
				return 0;
			}
		}
	}
	if (pos != -1)
	{
		swap(str[pos], str[str.size() - 1]);
		cout << str << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	return 0;
}
