//
// Created by 13176 on 2023/4/7.
//
#include "iostream"
#include "vector"

using namespace std;
int sum(vector<int>& nums, int start, int end){
    int res = 0;
    for(int i = start; i < end; ++i) {
        res += nums[i];
    }
    return res;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> op(m);
    vector<int> index(m);
    vector<int> value(m);
    for (int i = 0; i < m; ++i) {
        cin >> op[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> index[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> value[i];
    }

    vector<int> like(n,0);
    for (int i = 0; i < m; ++i) {
        if(op[i] == 0){
            like[index[i] - 1] = value[i];
        }else if(op[i] == 1){
            cout << sum(like, index[i] - 1, value[i]) << " ";
        }
    }
    return 0;
}