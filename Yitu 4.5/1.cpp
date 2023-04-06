//
// Created by Max on 4/5/23.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solve(int T, vector<int> candy){
    vector<int> ans(T);
    for(int i = 0; i < T; i++){
        if(candy[i] % 2 == 0 && candy[i] == pow(2, i)){
            ans[i] = 0;
        } else if(candy[i] == 6){
            ans[i] = 2;
        }else if (candy[i] % 2 == 0){
            ans[i] = 4;
        }else if (candy[i] == 3){
            ans[i] = 1;
        }else if (candy[i] == 5 || candy[i] == 7){
            ans[i] = 2;
        }else if(candy[i] % 2 != 0){
            ans[i] = 6;
        }
    }
    return ans;
}

int main(){
    int T;
    cin >> T;
    vector<int> candy(T);
    for(int i = 0; i < T; i++){
        int x;
        cin >> x;
        candy[i] = x;
    }
    vector<int> ans(T);
    ans = solve(T, candy);
    for(auto i : ans){
        cout << i << endl;
    }

    return 0;
}