int search(int arr[], int n, int x) {
	if (arr[0] == x) return 0;
	int i = 1;
	while (i < n && arr[i] <= x) i = i * 2;
	return binary_search(arr, i / 2, min(i, n - 1), x);
}
