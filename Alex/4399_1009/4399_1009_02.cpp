//
// Created by Max on 10/9/23.
//
#include <iostream>
#include <string>
using namespace std;

string replace_char(string s, char a, char b) {
    for (char &c : s) {
        if (c == a) {
            c = b;
        }
    }
    return s;
}

int main() {
    // 用例01: 将字符串中所有的'2'替换成'0'，期望返回"a1b03c40b"
    cout << "用例01: " << replace_char("a1b23c42b", '2', '0') << endl;

    // 用例02: 将字符串中所有的'a'替换成'x'，期望返回"x1b23c42b"
    cout << "用例02: " << replace_char("a1b23c42b", 'a', 'x') << endl;

    // 用例03: 将字符串中所有的'9'替换成'7'，期望返回"a1b23c42b"
    cout << "用例03: " << replace_char("a1b23c42b", '9', '7') << endl;

    // 用例04: 字符串中没有要替换的字符，期望返回"abcdefg"
    cout << "用例04: " << replace_char("abcdefg", 'x', 'y') << endl;

    // 用例05: 字符串为空，没有字符可替换，期望返回""
    cout << "用例05: " << replace_char("", 'a', 'b') << endl;

    return 0;
}
