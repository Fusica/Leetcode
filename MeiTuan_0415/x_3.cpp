//
// Created by Max on 4/15/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, T;
    cin >> n >> T;
    vector<vector<int>> res(n, vector<int>(2, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            res[i][j] = i+1;
        }
    }
    for (int i = 0; i < T; ++i) {
        char op;
        int idx;
        cin >> op >> idx;
        if(op == 'Q'){
            cout << res[idx-1][0] << ' ' << res[idx-1][1] << endl;
        }
        if(op == 'L'){
            if(res[idx-1][0] == 0 || res[idx-1][0] == idx-1) continue;
            res[idx-1][0] -= 1;
        }
        if(op == 'R'){
            if(res[idx-1][1] == n || res[idx-1][1] == idx+1) continue;
            res[idx-1][1] += 1;
        }
    }
    return 0;
}