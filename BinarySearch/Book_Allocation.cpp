int calcCount(vector<int>& arr,int pages){
    int n = arr.size();
    int studAt = 1;
    long long pagesHolding = 0;
    for(int i=0;i<n;i++){
        if(arr[i] + pagesHolding <= pages){
            pagesHolding += arr[i];
        }
        else{
            studAt++;
            pagesHolding = arr[i];
        }
    }
    return studAt;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m > n) return -1;
    long long low = *max_element(arr.begin(),arr.end());
    long long high = accumulate(arr.begin(),arr.end(),0);
    int ans = 0;
    while(low <= high){
        long long mid = (low + high) / 2;
        int c = calcCount(arr,mid);
        if(c > m) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}