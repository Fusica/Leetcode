//
// Created by 13176 on 2023/4/8.
//
#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    vector<vector<char>> nums(n, vector<char>(a*m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < a*m; ++j) {
            cin >> nums[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < a*m; ++j) {
            if (i < n - 1 && j < (m-1) * a){
                if(nums[i][j] != nums[i + 1][j + a]) count++;
            }
            if(i == n - 1 && j < (m-1) * a){
                if(nums[i][j] != nums[0][j + a]) count++;
            }
            if(i == n - 1 && j >= (m-1)* a && j < m * a ){
                if(nums[i][j] != nums[i + 1][j - a*(m - 1)]) count++;
            }else{
                if(nums[i][j] != nums[0][j - a*(m - 1)]) count++;
            }
        }
    }
    cout << count << endl;
    return 0;

}