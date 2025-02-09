#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 2, n = 21;
    int ans = 1;
    while(n > 0){
        if(n % 2 == 0){
            n = n / 2;
            x = x * x;
        }
        else{
            n = n - 1;
            ans = ans * x;
        }
    }
    cout << ans << endl;
    return 0;
}