//
// Created by Max on 4/8/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> bound(n-1);
    for (int i = 0; i < n-1; ++i) {
        cin >> bound[i];
    }
    int x, y;
    cin >> x >> y;

    return 0;
}