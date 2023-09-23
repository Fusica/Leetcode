//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    unordered_map<char, int> count;
    for (int i = 0; i < n; ++i) {
        for (char c : s[i]) {
            count[c]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            string s1 = s[i];
            string s2 = s[j];
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            bool simi = true;
            for (int k = 0; k < s1.size(); ++k) {
                if (s1[k] != s2[k]){
                    simi = false;
                    break;
                }
            }
            if (simi){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}