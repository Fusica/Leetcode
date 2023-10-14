//
// Created by Max on 10/9/23.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_min_k(vector<int> n, int k) {
    // 使用STL中的partial_sort来找到最小的k个数
    partial_sort(n.begin(), n.begin() + k, n.end());
    // 构建一个新的vector来存储结果
    vector<int> result(n.begin(), n.begin() + k);
    return result;
}

int main() {
    // 用例01: 找到数组中最小的2个数，期望返回[1,2]
    vector<int> result1 = find_min_k({1, 2, 3}, 2);
    cout << "用例01: [";
    for (int num : result1) {
        cout << num;
    }
    cout << "]" << endl;

    // 用例02: 找到数组中最小的3个数，期望返回[1,2,3]
    vector<int> result2 = find_min_k({3, 2, 1}, 3);
    cout << "用例02: [";
    for (int num : result2) {
        cout << num;
    }
    cout << "]" << endl;

    // 用例03: 找到数组中最小的1个数，期望返回[1]
    vector<int> result3 = find_min_k({1, 5, 8, 3, 7}, 1);
    cout << "用例03: [";
    for (int num : result3) {
        cout << num;
    }
    cout << "]" << endl;

    // 用例04: 找到数组中最小的5个数，期望返回[1,2,3,4,5]
    vector<int> result4 = find_min_k({9, 5, 3, 4, 7, 1, 2, 6, 8}, 5);
    cout << "用例04: [";
    for (int num : result4) {
        cout << num;
    }
    cout << "]" << endl;

    // 用例05: 找到数组中最小的0个数，期望返回[]
    vector<int> result5 = find_min_k({5, 4, 9}, 0);
    cout << "用例05: [";
    for (int num : result5) {
        cout << num;
    }
    cout << "]" << endl;

    return 0;
}
