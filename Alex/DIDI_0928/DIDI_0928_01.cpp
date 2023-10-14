#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool isValidSubstring(const string& str) {
    return str.length() >= 2 && str.length() <= 8;
}

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool isMirrorString(const string& s) {
    unordered_set<char> mirrorChars = { '(', ')', '[', ']', '{', '}', '<', '>', '/', '\\' };
    for (char c : s) {
        if (mirrorChars.find(c) == mirrorChars.end()) {
            return false;
        }
    }
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (mirrorChars.find(s[i]) == mirrorChars.end() || mirrorChars.find(s[j]) == mirrorChars.end() ||
            s[i] != *(mirrorChars.find(s[j])) || s[j] != *(mirrorChars.find(s[i]))) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

vector<string> findSubstrings(const string& inputStr) {
    vector<string> substrings;

    if (inputStr.length() <= 2) {
        return substrings;  // 字符串长度小于等于2，返回空的子串列表
    }

    for (int length = 2; length <= 8; ++length) {
        for (int start = 0; start <= inputStr.length() - length; ++start) {
            string substring = inputStr.substr(start, length);
            if (isValidSubstring(substring)) {
                substrings.push_back(substring);
            }
        }
    }

    return substrings;
}

int main() {
    string inputStr;
    cin >> inputStr;

    vector<string> result = findSubstrings(inputStr);

    int palindromeCount = 0;  // 用于统计回文串个数
    int mirrorCount = 0;     // 用于统计镜像串个数
    for (const string& substring : result) {
        if (isPalindrome(substring)) {
            palindromeCount++;
        }
        if (isMirrorString(substring)) {
            mirrorCount++;
        }
    }
    int ans = palindromeCount + mirrorCount;
    cout << ans;
    return 0;
}
