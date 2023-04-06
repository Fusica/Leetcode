//
// Created by Max on 4/5/23.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solve(int N, vector<int> task){
    vector<int> ans(N);
    for(int i = 0; i < N; i++){
        if(task[i] == 1) ans[i] = 1;
        else if(task[i] % 6 == 0){

        }
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    vector<int> task(N);
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        task[i] = x;
    }
    vector<int> ans(N);
    ans = solve(N, task);
    for(int i = 0; i < N; i++){
        int x;
        cout << ans[i] << endl;
    }
    return 0;
}