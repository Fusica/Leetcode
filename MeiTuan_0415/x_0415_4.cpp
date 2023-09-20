//
// Created by Max on 4/15/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int res;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            if(i == 0) a.push_back(x);
            if(i == 1) b.push_back(x);
            if(i == 2) c.push_back(x);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << c[i];
    }
    return 0;
}