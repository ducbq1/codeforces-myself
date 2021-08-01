#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, count = 0;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    int mMin = *min_element(b + 0, b + a - 1);

    int mMax = *max_element(b + 0, b + a - 1);

    cout << mMin << endl;
    cout << mMax << endl;


    for (int i = 0; i < a; i++) {
        if (b[i] == mMax) {
            count += i;
            cout << i;
            break;
        }
    }
    for (int i = a - 1; i >= 0; i--) {
        if (b[i] == mMin) {
          cout << i;
            if (i < count) {
                count += a - i - 2;
            } else {
                count += a - i - 1;
            }
            break;
        }
    }
    cout << count;
    return 0;
}
