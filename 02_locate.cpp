#include <bits/stdc++.h>

using namespace std;

const int N = 1010;
vector<pair<int, int>> a, b;
int countPoint[N * 2][N * 2];

int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		a.clear();
		b.clear();
		memset(countPoint, 0, sizeof(countPoint));
		int l, c;
		cin >> l >> c;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < c; j++) {
				int u;
				cin >> u;
				if (u == 1) {
					a.push_back(make_pair(i, j));
				}
			}
		}
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < c; j++) {
				int u;
				cin >> u;
				if (u == 1) {
					b.push_back(make_pair(i, j));
				}
			}
		}

		for (auto u : a) {
			for (auto v : b) {
				pair<int, int> w = {u.first - v.first + N, u.second - v.second + N};
				countPoint[w.first][w.second]++;
			}
		}
		int res = 0;
		for (int i = 0; i < N * 2; i++) {
			res = max(res, *max_element(countPoint[i], countPoint[i] + N * 2));
		}

		cout << res << endl;

	
	}
	return 0;
}
