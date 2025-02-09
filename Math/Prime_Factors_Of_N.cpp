#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 200;
    for(int i=2;i*i<=num;i++){
        if(num % i == 0) cout << i << " ";
        while(num % i == 0){
            num = num / i;
        }
    }
    if(num != 1) cout << num << " ";
    return 0;
}