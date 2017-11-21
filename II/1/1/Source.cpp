#include <iostream>
using namespace std;
int main()
{
	int n,i,k[5050],j=1,l;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (l = 1; l <= i; l++)
		{
			k[j] = l;
			j++;
		}
	for (i = 1; i <= j; i++)
		cout << k[i] << ',';
	return 0;
}