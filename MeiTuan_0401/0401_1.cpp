//
// Created by Max on 4/8/23.
//
#include <iostream>
#include <vector>

using namespace std;

vector<float> solve(vector<int>& nums, vector<int>& opIndex, vector<char>& op, int sum){
    vector<float> ans;
    for (int i = 0; i < opIndex.size(); ++i) {
        if(op[i] == '+') ans.push_back(float(sum));
        if(op[i] == '-'){
            auto newSum = float(sum);
            newSum  = newSum - float(nums[opIndex[i]-1])- float(nums[opIndex[i]]);
            newSum = newSum + float(nums[opIndex[i]-1]) - float(nums[opIndex[i]]);
            ans.push_back(newSum);
        }
        if(op[i] == '*'){
            auto newSum = float(sum);
            newSum  = newSum - float(nums[opIndex[i]-1]) - float(nums[opIndex[i]]);
            newSum = newSum + (float(nums[opIndex[i]-1]) * float(nums[opIndex[i]]));
            ans.push_back(newSum);
        }
        if(op[i] == '/'){
            auto newSum = float(sum);
            newSum  = newSum - float(nums[opIndex[i]-1]) - float(nums[opIndex[i]]);
            newSum = newSum + (float(nums[opIndex[i]-1]) / float(nums[opIndex[i]]));
            ans.push_back(newSum);
        }
    }
    return ans;
}

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        sum += nums[i];
    }

    int m; cin >> m;
    vector<int> opIndex(m); vector<char> op(m);
    for (int i = 0; i < m; ++i) {
        cin >> opIndex[i] >> op[i];
    }

    vector<float> ans(m);
    ans = solve(nums, opIndex, op, sum);
    for (int i = 0; i < m; ++i) {
        printf("%.1f ", ans[i]);
    }

    return 0;
}
