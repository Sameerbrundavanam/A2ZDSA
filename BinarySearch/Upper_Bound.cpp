int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int upperbound = n;
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] > x){
			upperbound = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		} 
	}
	return upperbound;	
}