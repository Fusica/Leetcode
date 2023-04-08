//
// Created by 13176 on 2023/4/7.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ans += nums[i + 1] - nums[i];
    }
    cout << ans << endl;
}