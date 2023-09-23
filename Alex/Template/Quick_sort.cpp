//
// Created by Max on 4/6/23.
//
#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& vec, int low, int high){
    int pivot = high;
    int i = low;
    for(int j = low; j < high; j++){
        if(vec[j] < vec[pivot]){
            swap(vec[j], vec[i++]);
        }
    }
    swap(vec[i], vec[pivot]);
    return i;
}

void qsort(vector<int>& vec, int low, int high) {
    if (low < high) {
        int mid = partition(vec, low, high);
        qsort(vec, low, mid-1);
        qsort(vec, mid+1, high);
    }
}

void quick_sort(vector<int>& vec, int len) {
    qsort(vec, 0, len - 1);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    quick_sort(vec, n);
    for(auto i : vec) cout << i << ' ';

    return 0;
}