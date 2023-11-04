#include <iostream>
#define MMAX 10
#define NMAX 10
#define VMAX 9999
using namespace std;
int main()
{
	int a[MMAX][NMAX], m, n, i, j, s, min;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "Introdu " << m*n << " numere de maxim 4 cifre fiecare:\n";
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (s = j = 0; j < n; j++)
	{
		for (min = VMAX, i = 0; i < m; i++)
			if (a[i][j] < min)
				min = a[i][j];
		s += min;
	}
	cout << "s = " << s;
	return 0;
}
