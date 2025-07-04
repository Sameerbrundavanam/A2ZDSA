#include <iostream>
#define ull unsigned long long
using namespace std;


int main(){
    ull base = 20, pow = 11;
    ull mod = 1e9+7;
    ull ans = 1;
    while(pow){
        if(pow & 1){
            ans = (ans * base) % mod;
            pow = pow - 1;
        }
        else{
            pow >>= 1;
            base = (base * base) % mod;
        }
    }
    cout << ans << endl;
}