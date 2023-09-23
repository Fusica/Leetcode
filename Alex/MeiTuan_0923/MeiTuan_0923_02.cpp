#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 输入

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        // 判断是否可以进行 10 的 18 次方 次操作

        bool possible = true;
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j];
            }
        bool same = m * sum > 0;

        if(sum == 0 || same){
            possible = true;
        }
        else {
            if (m % abs(sum) == 0) {
                possible = false;
            }
        }

        // 输出

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
