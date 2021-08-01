#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    vector<int> c;
    cin >> a;
    while (a--) {
        cin >> b;
        int i = 0, j = 0;
        while (b > 0) {
            c.push_back((b % 10) * pow(10, i++));
            b = b / 10;
        }
        for (auto d : c) {
            if (d == 0) j++;
        }
        cout << c.size() - j << endl;
        for (auto d : c) {
            if (d != 0) {
                cout << d << ' ';
            }
        }
        cout << endl;
        c.clear();
    }
    
    return 0;
}
