#include <iostream>
using namespace std;
int main()
{
	int n,i,k=0;
	cin >> n;
	float x[100];
	for (i = 2; i < n; i++)
	{
		if ((x[i - 1] + x[i + 1]) / 2.0 == x[i])
			k++;
	}
	cout << k;
	return 0;
}