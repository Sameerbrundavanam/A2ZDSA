#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
	vector<int>blackBox(n+1,1);
	blackBox[0] = 0;
	blackBox [1] = 0;
	for(int i=2;i*i<=n;i++){
		if(blackBox[i] == 1){
			for(int j= i * i ; j<= n;j += i){
				blackBox[j] = 0;
			}
		}
	}
	for(int i=2;i<n;i++){
		if(blackBox[i] == 1){
			cout << i << "\n";
		}	
	}
    return 0;
}