#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long i64;
typedef vector<int> vi;
typedef vector<i64> vi64;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout << fixed;
  int p, h;
  cin >> p >> h;
  vector<vector<int>> a(p, vector<int>(h));
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < h; j++) {
      cin >> a[i][j];
    }
  }
  return 0;
}
