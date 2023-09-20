//
// Created by Max on 4/15/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T; cin >> T;
    vector<int> res;
    for (int i = 0; i < T; ++i) {
        int n, a, b;
        cin >> n >> a >> b;
        int n_1= n / 2;
        int n_2 = n - n_1;
        if((n_1 <= n_2 && a <= b) || (n_1 > n_2 && a > b)) {
            int split_a = ceil(float(a) / float(n_1));
            int split_b = ceil(float(b) / float(n_2));
            int remain_a = a - split_a * (n_1 - 1);
            int remain_b = b - split_b * (n_2 - 1);
            int res_a = min(split_a, remain_a);
            int res_b = min(split_b, remain_b);
            res.push_back(min(res_a, res_b));
        } else if((n_1 < n_2 && a > b) || (n_1 > n_2 && a < b)){
            int split_a = ceil(float(a) / float(n_2));
            int split_b = ceil(float(b) / float(n_1));
            int remain_a = a - split_a * (n_2 - 1);
            int remain_b = b - split_b * (n_1 - 1);
            int res_a = min(split_a, remain_a);
            int res_b = min(split_b, remain_b);
            res.push_back(min(res_a, res_b));
        }
    }
    for (int i = 0; i < T; ++i) {
        cout << res[i] << endl;
    }
    return 0;
}