//
// Created by Max on 4/15/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int C;
    cin >> C;
    vector<int> res;
    for (int i = 0; i < C; ++i) {
        string S;
        string T;
        cin >> S >> T;
        if(T.length() == 0) res.push_back(S.length());
        int cnt = 0;
        if(S.length() <= T.length()){
            for (int j = 0; j < S.length(); ++j) {
                if(S[j] != T[j]) cnt++;
            }
        } else{
            for (int j = 0; j < T.length(); ++j) {
                if(S[j] != T[j]) cnt++;
            }
            cnt += S.length() - T.length();
        }
        res.push_back(cnt);
    }
    for (int i = 0; i < C; ++i) {
        cout << res[i] << endl;
    }
    return 0;
}