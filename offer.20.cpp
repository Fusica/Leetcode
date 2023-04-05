//
// Created by Max on 4/5/23.
//
#include <iostream>
#include <algorithm>

using namespace std;

bool isNumber(string s) {
    int pos = 0;
    while (pos < s.size() && s[pos] == ' ') {
        pos++;
    }
    s = s.substr(pos);
    while (s.back() == ' ') {
        s.pop_back();
    }
    bool numFlag = false, dotFlag = false, eFlag = false;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            numFlag = true;
        } else if (s[i] == '.' && !dotFlag && !eFlag) {
            dotFlag = true;
        } else if ((s[i] == 'e' || s[i] == 'E') && !eFlag && numFlag) {
            eFlag = true;
            numFlag = false;
        } else if ((s[i] == '-' || s[i] == '+') && (i == 0 || s[i - 1] == 'e' || s[i - 1] == 'E')) {
            // 有必要写出，来保证+-号时不会直接return false
        } else {
            return false;
        }
    }
    return numFlag;
}


int main() {
    string s;
    cin >> s;
    bool ans = false;
    ans = isNumber(s);
    if(ans)
        cout << "true";
    else
        cout << "false";

    return 0;
}