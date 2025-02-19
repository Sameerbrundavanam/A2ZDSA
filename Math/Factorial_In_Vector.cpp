#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for (int num = 2; num <= n; num++) {
        int carry = 0;

        for (size_t i = 0; i < result.size(); i++) {
            int product = result[i] * num + carry;
            result[i] = product % 10;
            carry = product / 10;
        }

        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> fact = factorial(n);
    for (int digit : fact) {
        cout << digit;
    }
    cout << endl;
    cout << fact.size();
    cout << endl;

    return 0;
}