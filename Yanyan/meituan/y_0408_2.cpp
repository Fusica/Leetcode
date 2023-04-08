//
// Created by 13176 on 2023/4/8.
//
#include "iostream"
#include "vector"
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> edge(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> edge[i];
    }
    int n1, n2;
    cin >> n1 >> n2;

    return 0;
}