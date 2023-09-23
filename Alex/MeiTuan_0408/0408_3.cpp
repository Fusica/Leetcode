//
// Created by Max on 4/8/23.
//
#include <iostream>
#include <vector>

using namespace std;

int cost(int u, int v, int k, int s){
    if(k == 1) return k * int(floor(float(u) / 2)) + s;
    return k * int(floor(float(u+v) / 2)) + s;
}

int main(){
    int n, m, s;
    cin >> n >> m >> s;
    vector<int> fruit(n);
    for (int i = 0; i < n; ++i) {
        cin >> fruit[i];
    }
    sort(fruit.begin(), fruit.end());

    return 0;
}