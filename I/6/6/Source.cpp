#include <iostream>
using namespace std;
void m(int a[100][100], int b[100][100], int n)
{
	int c[100][100], i, j, k;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			for (k = 1; k <= n; k++)
				c[i][j] = a[i][k] * b[k][j] + c[i][j];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << c[i][j] << ' ';
		cout << '\n';
	}
}
int main()
{
	int i, j, a[100][100], b[100][100], n;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> b[i][j];
	m(a, b, n);
}