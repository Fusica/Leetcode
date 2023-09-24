//
// Created by 13176 on 2023/9/23.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned int Q, seed;
    cin >> Q >> seed;
    unsigned int ans = 0;
    vector<int> nums;

    for (unsigned int i = 0; i < Q;i++) {
        seed ^= (seed << 15);
        seed ^= (seed >> 5);
        seed ^= (seed << 1);
        seed %= (1 << 15);

        int op = (seed ^ (seed << 7) ^ (seed >> 5)) % 3 + 1;
        int m = (seed ^ (seed << 6) ^ (seed >> 10)) % Q + 1;
        int x = (seed ^ (seed << 5) ^ (seed << 9) ^ (seed >> 6)) % 10 + 1;

        if(op == 1){
            nums.push_back(x);
        }else if(op == 2){
            while(m > 0 && !nums.empty()){
                if(nums.back() == x){
                    nums.pop_back();
                    m--;
                }else{
                    break;
                }
            }
        }else if (op == 3){
            if(!nums.empty()){
                int max_val = nums[0];
                int min_val = nums[0];
                for (int num : nums) {
                    max_val = max(max_val, num);
                    min_val = min(min_val, num);
                }
                int diff = max_val - min_val;
                ans ^= (i + 1)*diff;
            }
        }
    }

    cout << ans << endl;
    return 0;
}