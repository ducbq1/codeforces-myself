#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int x, int n) {
	int step = sqrt(n);
	int prev = 0;

	while (arr[min(step, n) - 1] < x) {
		prev = step;
		step += sqrt(n);
		if (prev >= n) return -1;
	}

	while (arr[prev] < x) {
		prev++;
		if (prev == min(step, n)) return -1;
	}

	if (arr[prev] == x) return prev;
	return -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(null);
	return 0;
}
