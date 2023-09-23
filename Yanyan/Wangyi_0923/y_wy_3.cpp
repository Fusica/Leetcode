//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
using namespace std;

const long long mod = 1000000007;

double calculateAverage(const vector<int>& subsequence){
    double sum = 0;
    for (int num : subsequence) {
        sum += num;
    }
    return sum / subsequence.size();
}

void generateSubsequences(const vector<int>& arr, vector<double>& averages){
    int n = arr.size();
    for (int i = 0; i < (1 << n); ++i) {
        vector<int> subsequence;
        for (int j = 0; j < n; ++j) {
            if(i & (i << j)){
                subsequence.push_back(arr[j]);
            }
        }
        if(!subsequence.empty()){
            double average = calculateAverage(subsequence);
            averages.push_back(average);
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<double> averages;
    generateSubsequences(arr, averages);
    double sum = 0;

    for (double average : averages) {
        sum += average;
    }
    if (sum==static_cast<int>(sum)) {
        auto longSum = static_cast<long long>(sum);
        cout << longSum % mod;
    }else {
        cout << (mod + sum *2)/2;
    }
    return 0;

}