//
// Created by 13176 on 2023/4/15.
//
#include "vector"
#include "iostream"

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans(t);
    for (int i = 0; i < t; ++i) {
        int n, a, b;
        cin >> n >> a >> b;
        if(a + b == n) ans[i] = 1;
        else if((a + b) / n == 1) ans[i] == 1;
        else if((a + b) / n != 1){
            int x = n / 2;
            if(a < b){
                ans[i] = (a / x) > (a % x) ? a / x: a % x;
            }else{
                ans[i] = (b / x) > (b % x) ? b / x: b % x;
            }
        }
    }

    for (int i = 0; i < t; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}