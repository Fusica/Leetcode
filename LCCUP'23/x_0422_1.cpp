//
// Created by Max on 4/22/23.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> supplyWagon(vector<int>& supplies) {
        int op = supplies.size() - supplies.size() / 2;
        while(op--){
            vector<int> sum(supplies.size()-1, 0);
            int min = INT_MAX, idx = 0;
            for(int i = 0; i < supplies.size()-1; i++){
                sum[i] = supplies[i] + supplies[i+1];
                if(sum[i] < min){
                    min = sum[i];
                    idx = i;
                }
            }
            supplies[idx] += supplies[idx+1];
            auto it = supplies.begin() + idx + 1;
            supplies.erase(it);
        }
        return supplies;
    }
};

int main(){
    vector<int> input(5, 0);
    for (int i = 0; i < 5; ++i) {
        cin >> input[i];
    }
    input = Solution().supplyWagon(input);
    for(int x : input){
        cout << x;
    }
}