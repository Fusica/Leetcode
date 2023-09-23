//
// Created by 17331 on 9/23/2023.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxLength = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j] && i - j == dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        maxLength = max(maxLength, dp[i]);
    }

    cout << maxLength << endl;

    return 0;
}
