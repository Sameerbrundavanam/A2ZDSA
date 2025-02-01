int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int lb = n; int l = 0, h = n - 1;
	while(l <= h){
		int m = (l+h) / 2;
		if(arr[m] >= x){
			lb = m;
			h = m - 1;
		}
		else l = m + 1;
	}
	return lb;
}