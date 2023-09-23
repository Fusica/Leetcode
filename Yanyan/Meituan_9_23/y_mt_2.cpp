//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }

        bool pb = true;
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += a[j];
        }
        bool same = m * sum > 0;

        if (sum == 0 || same){
            pb = true;
        }else{
            if (m % abs(sum) == 0){
                pb = false;
            }
        }

        if(pb){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;

}