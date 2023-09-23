#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

# define INF 1e9
using namespace std;


class Solution {
public:
    int min(int n, vector<int> nums) {
        int min = INF;
        for(int i = 0; i < n; i++){
            if(nums[i] < min) min = nums[i];
        }
        return min;
    }

    int max(int n, vector<int> nums) {
        int max;
        for(int i = 0; i < n; i++){
            if(nums[i] > max) max = nums[i];
        }
        return max;
    }

    double mean(int n, vector<int> nums) {
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        return (double)sum / n;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums[i] = temp;
    }
    int min, max;
    double mean;
    min = Solution().min(n, nums);
    max = Solution().max(n, nums);
    mean = Solution().mean(n, nums);
    printf("%d %d %.3f", min, max, mean);

    return 0;
}