//
// Created by Max on 4/3/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    static vector<int> printNumbers(int n) {
        int num = 1;
        while (n) {
            num *= 10;
            n--;
        }
        num -= 1;
        vector<int> g(num);
        for (int i = 1; i <= num; i++) {
            g[i - 1] = i;
        }
        return g;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    ans = Solution::printNumbers(n);
    for(int an : ans){
        printf("%d, ", an);
    }

    return 0;
}