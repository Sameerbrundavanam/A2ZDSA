//Eucledian Algorithm
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 52, b = 10;
    while(a > 0 and b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) cout << b;
    else cout << a;
    return 0;
}