//
// Created by 13176 on 2023/9/20.
//
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;

    set<char> chars;
    string result = "";

    for (char c : s) {
        chars.insert(c);
    }

    for(char c : chars){
        result += c;
    }

    cout << result << endl;
    return 0;
}