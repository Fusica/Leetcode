//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> value(n);
        for (int j = 0; j < n; ++j) {
            cin >> value[j];
        }

        bool pb = true;
        for (int j = 1; j < n; ++j) {
            if (value[j] < value[j - 1]){
                int q = j;
                while (q > 0 && value[q] < value[(q - 2) % n]){
                    swap(value[q], value[(q - 2) % n]);
                    q -= 2;
                }
                if (q == 0 && value[0] < value[1]){
                    pb = false;
                    break;
                }
            }
        }

        if (pb){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }

    return 0;

}