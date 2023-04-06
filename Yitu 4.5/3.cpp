//
// Created by Max on 4/5/23.
//
//
// Created by Max on 4/5/23.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solve(int n, vector<int>& num, vector<vector<int>>& range){
    vector<int> ans(n, 0);
    for(int i : num){
        for(auto & j : range){
            if(i >= j[0] && i <= j[1]){
                ans[i] = 1;
            }
        }
    }
    return ans;
}

int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n, m;
        cin >> n >> m;
        vector<int> num(n);
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            num[j] = x;
        }
        vector<vector<int>> range(m, vector<int>(2));
        for(int k = 0; k < m; k++){
            int left, right;
            cin >> left >> right;
            range[k][0] = left;
            range[k][1] = right;
        }
        vector<int> ans(n);
        ans = solve(n, num, range);
        printf("\nCase #%d:\n", i+1);
        for(int l = 0; l < n; l++){
            cout << ans[l] << endl;
        }
    }
    return 0;
}