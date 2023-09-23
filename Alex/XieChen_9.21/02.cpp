#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool canTransform(string s, string t) {
    if (s.size() != t.size()) {
        return false; // 字符串长度不同，无法转换
    }

    unordered_map<char, char> transform; // 用于记录字母的转换关系

    for (int i = 0; i < s.size(); ++i) {
        char ch1 = s[i];
        char ch2 = t[i];

        if (transform.find(ch1) == transform.end()) {
            transform[ch1] = ch2;
        } else {
            // 如果ch1已经有了转换关系，检查是否与ch2一致
            if (transform[ch1] != ch2) {
                return false; // 无法通过操作将字符串s变成t
            }
        }
    }

    return true; // 可以通过操作将字符串s变成t
}

int main() {
    int queries;
    cin >> queries;

    while (queries--) {
        string s, t;
        cin >> s >> t;

        if (canTransform(s, t)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
