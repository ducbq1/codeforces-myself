#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
	int lo = 0, hi = n - 1;
	while (lo <= hi && x >= arr[lo] && x <= arr[hi])
	{
		if (lo == hi)
			if (arr[lo] == x)
				return lo;
			else
				return -1;
		int pos = lo + (double)(hi - lo) / (arr[hi] - arr[lo]) * (x - arr[lo]);
		if (arr[pos] == x)
			return pos;
		if (arr[pos] < x)
			lo = pos + 1;
		else
			hi = pos - 1;
	}

	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(null);
	return 0;
}
