//
// Created by 13176 on 2023/4/15.
//
#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n, T;
    cin >> n >> T;
    vector<vector<int>> matrix(n, vector<int>(n,0));
    vector<vector<int>> res;

    for (int i = 0; i < T; ++i) {
        char op;
        int idx;
        cin >> op >> idx;
        if(op == 'L') {
            matrix[idx - 1][idx - 2] = 1;
        }
        if (op == 'R'){
            matrix[idx - 1][idx] = 1;
        }
        if (op == 'Q'){
            vector<int> ans;
            int x = idx;
            for (int j = 0; j < idx; ++j) {
                if (matrix[idx - 1][j] == 1){
                    x = j + 1;
                };
            }
            ans.push_back(x);
            x = idx;
            for (int j = idx; j < n; ++j) {
                if (matrix[idx - 1][j] == 1){
                    x = j + 1;
                };
            }
            ans.push_back(x);
            res.push_back(ans);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}