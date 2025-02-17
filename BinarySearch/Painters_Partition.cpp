int calcCount(vector<int> &boards,int mid){
    int n = boards.size();
    int wallAt = 1, time = 0;
    for(int i=0;i<n;i++){
        if(boards[i] + time <= mid){
            time += boards[i];
        }
        else{
            wallAt++;
            time = boards[i];
        }
    }
    return wallAt;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);
    while(low <= high){
        int mid = (low + high) / 2;
        int count = calcCount(boards,mid);
        if(count > k) low = mid + 1;
        else high = mid - 1; 
    }
    return low;
}

