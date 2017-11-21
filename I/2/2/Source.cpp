#include <iostream>
using namespace std;

int main()
{
	int i, n, x[100], r, ok = 1; cin >> n;
	for (i = 1; i <= n; i++)
		cin >> x[i];
	r = x[2] - x[1];
	for (i = 1; i < n && ok == 1; i++)
		if (x[i + 1] - x[i] != r)
			ok = 0;
	if (ok == 0)
		cout << "da";
	else
		cout << "nu";
}