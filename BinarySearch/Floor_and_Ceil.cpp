int calculateFloor(vector<int> &a, int n, int x){
	int ans = -1;
	int l = 0, h = n - 1;
	while(l <= h){
		int m = (l + h) / 2;
		if(a[m] <= x){
			ans = a[m];
			l = m + 1;
		}
		else{
			h = m - 1;
		}
	}
	return ans;
}

int calculateCeil(vector<int> &a, int n, int x){
	int l = 0, h = n - 1;
	int ans = -1;
	while(l <= h){
		int m = (l + h) / 2;
		if(a[m] >= x){
			ans = a[m];
			h = m - 1;
		}
		else{
			l = m + 1;
		}
	}
	return ans;
}



pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int> ans;
	int firstElement = calculateFloor(a,n,x);
	int secondElement = calculateCeil(a,n,x);
	ans.first = firstElement;
	ans.second = secondElement;
	return ans;
}