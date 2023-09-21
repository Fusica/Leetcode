//
// Created by 13176 on 2023/9/21.
//
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool judge(string s, string t){
    if(s.size() != t.size()) return false;
    unordered_map<char,char> trans;
    for (int i = 0; i < s.length(); ++i) {
        char ch1 = s[i];
        char ch2 = t[i];

        if(trans.find(ch1) == trans.end()){
            trans[ch1] = ch2;
        }else {
            if (trans[ch1] != ch2){
                return false;
            }
        }
    }
//
//    unordered_map<char, bool> used;
//    for (char ch : t) {
//        used[ch] = true;
//    }
//
//    for (char ch : s) {
//        if (used.find(ch) == used.end()){
//            return false;
//        }
//    }
    return true;
}

int main(){
    int q;
    cin >> q;

    while(q--){
        string s, t;
        cin >> s >> t;

        if (judge(s, t)){
            cout << "YES" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}