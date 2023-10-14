#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a;

    cout << "请输入一个整数：";
    cin >> a;

    // 将整数转换为字符串
    string str_a = to_string(a);

    // 颠倒字符串
    reverse(str_a.begin(), str_a.end());

    // 输出颠倒后的字符串
    cout << "颠倒后的字符串：" << str_a << endl;

    return 0;
}
