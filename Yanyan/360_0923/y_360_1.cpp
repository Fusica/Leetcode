//
// Created by 13176 on 2023/9/23.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> doors(n,0);

    int p = 0;
    vector<int> ans(n, -1);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; ++i) {
        doors[nums[i] - 1] = 1;
        while(p < n && doors[p] == 1){
            ans[p] = i + 1;
            p++;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i];
        if (i < n - 1){
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}