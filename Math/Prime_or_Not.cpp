#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 2;
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            cnt++;
            if((n / i) != i) cnt++;
        }
        if(cnt > 2) break;
    }
    if(cnt == 2) cout << "Yes I am a prime";
    else cout << "Sorry I am not a prime";
    return 0;
}