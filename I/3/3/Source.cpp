#include <iostream>

using namespace std;

int main()
{
	int a[100][100], n, p1=1, s2=0, p3=1, s4=0, i, j;
	cin >> n;
	for(i=1;i<=n;i++)
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if (i < j)
				if (i + j < n + 1)
					p1 *= a[i][j];
				else
					s4 += a[i][j];
			else
				if (i + j < n + 1)
					s2 += a[i][j];
				else
					p3 *= a[i][j];

		}
	cout << p1 << ' ' << p3 << ' ' << s2 << ' ' << s4 ;
}