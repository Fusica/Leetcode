#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    // 输入

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    // 统计每个字母的个数

    unordered_map<char, int> count;
    for (int i = 0; i < n; i++) {
        for (char c : s[i]) {
            count[c]++;
        }
    }

    // 计算相似的字符串对的数量

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string s1 = s[i];
            string s2 = s[j];
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            bool similar = true;
            for (int k = 0; k < s1.size(); k++) {
                if (s1[k] != s2[k]) {
                    similar = false;
                    break;
                }
            }
            if (similar) {
                ans++;
            }
        }
    }

    // 输出

    cout << ans << endl;

    return 0;
}
