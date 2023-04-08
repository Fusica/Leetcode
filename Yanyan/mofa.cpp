//
// Created by 13176 on 2023/4/8.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> size(n);
    vector<int> init(n);
    vector<int> power(n);
    for (int i = 0; i < n; ++i) {
        cin >> size[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> init[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> power[i];
    }

    int m;
    cin >> m;
    vector<int> index(m);
    for (int i = 0; i < n; ++i) {
        cin >> index[i];
    }

    vector<int> full(n);
    full[0] = (size[0] - init[0]) * power[0];
    for (int i = 0; i < n - 1; ++i) {
        full[i + 1] = min(full[i], );
    }
}