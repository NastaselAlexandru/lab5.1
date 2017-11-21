#include <iostream>
using namespace std;

int main()
{
	int  b2[120], b8[40];
	char b16[30];
	int n;
	int i,j;
	do
	{
		cin >> n;
	} while (!(n % 3 == 0 && n % 4 == 0));
	for (i = 1; i <= n; i++)
		cin >> b2[i];
	j = 1;
	for (i = 1; i <= n / 3; i++)
	{
		b8[i] = 2 * 2 * b2[j] + 2 * b2[j] + b2[j];
		i += 3;
	}
	j = 1;
	for (i = 1; i <= n / 4; i++)
	{
		b16[i] = 2 * 2 * 2 * b2[j] + 2 * 2 * 2* b2[j] + 2 * b2[j] + b2[j];
		if (b16[i] == 10)
			b16[i] = 'A';
		if (b16[i] == 11)
			b16[i] = 'B';
		if (b16[i] == 12)
			b16[i] = 'C';
		if (b16[i] == 13)
			b16[i] = 'D';
		if (b16[i] == 14)
			b16[i] = 'E';
		if (b16[i] == 15)
			b16[i] = 'F';
	}
	for (i = 1; i <= n / 3; i++)
		cout << b8[i];
	cout << '\n';
	for (i = 1; i <= n / 4; i++)
		cout << b16[i];
}
