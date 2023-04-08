//
// Created by 13176 on 2023/4/8.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n, m;
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


    cin >> m;
    vector<int> index(m);
    for (int i = 0; i < m; ++i) {
        cin >> index[i];
    }

    vector<int> pres(n);
    //计算每个瓶子”还差多少装满“
    for (int i = 0; i < n - 1; ++i) {
        //计算第二个杯子装满 = 第一个杯子装满ml差 + 第二个装满ml差
        pres[i + 1] += pres[i] + size[i + 1] - init[i + 1];
    }

    //装满当前的瓶子所需要ml差，有可能是前面所有瓶子都装满所需要的ml差
    for (int i = 0; i < m; ++i) {
        int x = index[i];
        int cur = 99999;
        for (int j = 0; j < x; ++j) {
            cur = min(cur, (pres[x - 1] - pres[j]) * power[j]);
        }
        cout << cur << " ";
    }
    cout << endl;
    return 0;
}