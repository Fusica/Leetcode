#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n);

    // 构造排列b，满足ai != bi，并且b的字典序尽可能小
    vector<bool> used(n + 1, false);
    for (int i = 0; i < n; ++i) {
        int candidate = a[i];
        while (used[candidate]) {
            candidate--;
        }
        b[i] = candidate;
        used[candidate] = true;
    }

    // 输出排列b
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }

    return 0;
}
