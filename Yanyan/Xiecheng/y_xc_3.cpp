//
// Created by 13176 on 2023/9/21.
//
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            unordered_set<char> seen;
            for (int b = i; b < n; ++b) {
                for (int r = j; r < m; ++r) {
                    char currentChar = matrix[b][r];
                    if(seen.count(currentChar)) break;
                    seen.insert(currentChar);
                    count++;
                }

            }
        }
    }

    cout << count << endl;
    return 0;

}