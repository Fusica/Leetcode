//
// Created by 13176 on 2023/4/5.
//
#include "vector"
#include "iostream"
using namespace std;
vector<int> exchange(vector<int>& nums) {
    int i = 0, j = nums.size() - 1;
    while(i < j){
        if (nums[i] % 2 != 0){
            i++;
        }else{
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            j--;
        }
    }
    return nums;
}

int main(){
    vector<int> nums;
    int n;
    while(cin >> n){
        nums.push_back(n);
        if(getchar() == '\n') break;
    }

    vector<int> ans;
    ans = exchange(nums);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

