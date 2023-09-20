//
// Created by Max on 4/19/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            matrix[i][j] = x;
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            if(x == matrix[i][j]) cnt++;
        }
    }

    float percent = float(cnt) / float(m * n) * 100.0;
    printf("%.2f", percent);
    return 0;
}