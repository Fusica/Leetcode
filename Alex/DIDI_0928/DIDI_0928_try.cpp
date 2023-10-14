#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

// 函数用于将字符 c 替换为其镜像字符，如果没有对应的镜像字符，则返回原字符
char getMirrorChar(char c) {
    unordered_set<char> mirrorChars = { '(', ')', '[', ']', '{', '}', '<', '>', '/', '\\' };
    unordered_set<char> mirrorMappings = { ')', '(', ']', '[', '}', '{', '>', '<', '\\', '/' };

    if (mirrorChars.find(c) != mirrorChars.end()) {
        if(c == '(') c = ')';
        else if(c == ')')
        return *(mirrorMappings.find(c));
    }

    return c;
}

bool isPalindrome(const string& s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool isMirrorString(string& s) {
    for (char& c : s) {
        c = getMirrorChar(c); // 替换为镜像字符
    }

    return isPalindrome(s);
}

int main() {
    string s = "\\^o^/";
    bool ans = isMirrorString(s);
    cout << ans;
    return 0;
}
