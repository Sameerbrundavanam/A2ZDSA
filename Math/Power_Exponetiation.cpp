//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    unsigned long long x = 2, n = 63;
    unsigned long long ans = 1;
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