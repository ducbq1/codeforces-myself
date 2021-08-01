#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x) return mid;
		if (arr[mid] > x) return search(arr, l, mid - 1, x);
		else return search(arr, mid + 1, r, x);
	}
}
