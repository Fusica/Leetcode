#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 输入

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        // 判断是否可以通过有限次交换使得数组变成一个单调不减的数组

        bool possible = true;
        for (int j = 1; j < n; j++) {
            if (a[j] < a[j - 1]) {
                int i = j;
                while (i > 0 && a[i] < a[(i - 2) % n]) {
                    swap(a[i], a[(i - 2) % n]);
                    i -= 2;
                }
                if (i == 0 && a[0] < a[1]) {
                    possible = false;
                    break;
                }
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
