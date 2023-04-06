//
// Created by 13176 on 2023/4/3.
//
#include "algorithm"
#include "iostream"
using namespace std;

vector<int> printNumbers(int n) {
    int num = 0;
    while(n--){
        num = num * 10 + 9;
    }
    vector<int> ans;
    for(int i = 1; i <= num; i++){
        ans.push_back(i);
    }
    return ans;
}


int main(){
    int n;
    cin >> n;
    vector<int> ans;
    ans = printNumbers(n);
    for (int i = 0; i < ans.size() - 1; ++i) {
        cout << ans[i] << ",";
    }
    cout << ans[ans.size()-1];
    return 0;
}