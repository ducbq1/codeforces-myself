#include <bits/stdc++.h>

using namespace std;

const int X = 1e9 + 7;

int binomialCoeff(int n, int k) {
	int c[k + 1];
	memset(c, 0, sizeof(c));
	c[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = min(i, k); j > 0; j--) {
			c[j] = c[j] + c[j - 1];
			c[j] = c[j] % X;
		}
	}
	return c[k] % X;
}

int main() {
	int m, n;
	cin >> m >> n;
	int res = binomialCoeff(m + n - 1, n - 1);
	cout << res << endl;
	return 0;
}

