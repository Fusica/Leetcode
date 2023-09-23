//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> list(n);
    vector<int> dp(n,1);

    for (int i = 0; i < n; ++i) {
        cin >> list[i];
    }

    int maxLength = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (list[i] == list[j] && i-j == dp[j] + 1){
                dp[i] = dp[j] + 1;
            }
        }
        maxLength = max(maxLength, dp[i]);
    }

    cout << maxLength << endl;

    return 0;


}