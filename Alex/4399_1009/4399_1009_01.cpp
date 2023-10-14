//
// Created by Max on 10/9/23.
//
#include <iostream>
#include <unordered_map>
using namespace std;

char find_max(const string& s) {
    unordered_map<char, int> char_count;
    char max_char = '\0';
    int max_count = 0;

    for (char c : s) {
        if (isalpha(c)) { // 只考虑字母字符
            char_count[c]++;
            if (char_count[c] > max_count) {
                max_count = char_count[c];
                max_char = c;
            }
        }
    }

    return max_char;
}

int main() {
    // 用例01: 字符串中出现次数最多的是'b'，期望返回'b'
    cout << "用例01: " << find_max("a1b23b42b") << endl;

    // 用例02: 字符串中出现次数最多的是'c'，期望返回'c'
    cout << "用例02: " << find_max("abcdefgccc") << endl;

    // 用例03: 字符串为空，期望返回空字符'\0'
    cout << "用例03: " << find_max("") << endl;

    // 用例04: 字符串中没有字母字符，期望返回空字符'\0'
    cout << "用例04: " << find_max("1234567890") << endl;

    // 用例05: 字符串中出现次数最多的是空格字符' '，期望返回' '
    cout << "用例05: " << find_max("a bcde fgh") << endl;

    return 0;
}
