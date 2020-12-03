#include <bits/stdc++.h>

using namespace std;

int binomialCoeff(int n, int k) {
	if (k > n) {
		return 0; 
	} else if (k == 0 || k == n) {
		return 1;
	} else {
		return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	int ways = binomialCoeff(n + m - 1, n - 1);
	cout << ways << '\n';
	return 0;
}

