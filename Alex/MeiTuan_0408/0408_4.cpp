//
// Created by Max on 4/8/23.
//
#include <iostream>
#include <vector>

using namespace std;

int distance(int x1, int y1, int x2, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> boom(k, vector<int>(2));
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> boom[i][j];
        }
    }
    int startx, starty, endx, endy;
    cin >> startx >> starty >> endx >> endy;

    int ans = 0;
    while(startx != endx && starty != endy){

    }


    return 0;
}