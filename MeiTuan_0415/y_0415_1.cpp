//
// Created by 13176 on 2023/4/15.
//
#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i] >> t[i];
    }


    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        if(t[i].size() == 0) ans.push_back(s[i].size());
        if(s[i].size() > t[i].size()){
            for (int j = 0; j < t[i].size(); ++j) {
                if(s[i][j] != t[i][j]) count++;
            }
            count += s[i].size() - t[i].size();
        }else{
            for (int j = 0; j < s[i].size(); ++j) {
                if(s[i][j] != t[i][j]) count++;
            }
        }
        ans.push_back(count);
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << endl;
    }

    return 0;
}
