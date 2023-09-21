//
// Created by 13176 on 2023/9/21.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n);
    sort(a.begin(), a.end());
    //标记数组
    vector<bool> used(n+1, false);

    //排列b
    for (int i = 0; i < n; ++i) {
        int current = a[i];
        for (int j = 1; j < n; ++j) {
            if (!used[j]){
                if(j!= current){
                    b[i] = j;
                    used[j] = true;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}