//
// Created by Max on 4/8/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    vector<vector<char>> seat(n, vector<char>(m*a, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m*a; ++j) {
            char x; cin >> x;
            seat[i][j] = x;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m*a; ++j) {
            if(seat[i][j] != seat[(i+1) % n][(j+a) % (m*a)])
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}