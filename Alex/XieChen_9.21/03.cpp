#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countUniqueSubmatrices(vector<vector<char>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int totalCount = 0;

    for (int top = 0; top < rows; ++top) {
        for (int left = 0; left < cols; ++left) {
            unordered_set<char> seen;

            for (int bottom = top; bottom < rows; ++bottom) {
                for (int right = left; right < cols; ++right) {
                    char currentChar = matrix[bottom][right];

                    if (seen.count(currentChar)) {
                        break; // 字母已经出现过，结束当前子矩阵
                    }

                    seen.insert(currentChar);

                    // 如果每个字母最多出现一次，增加子矩阵的数量
                    totalCount++;
                }
            }
        }
    }

    return totalCount;
}

int main() {
    int n, m;
    cin >> n >> m;

    // 读取字母矩阵
    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // 计算满足条件的子矩阵个数
    int result = countUniqueSubmatrices(matrix);

    cout << result << endl;

    return 0;
}
