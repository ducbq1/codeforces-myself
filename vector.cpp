#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> myVector(n);
  for (auto &i : myVector) {
    cin >> i;
  }
  cout << myVector.size() << endl;
  return 0;
}
