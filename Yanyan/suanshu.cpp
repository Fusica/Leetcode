//
// Created by 13176 on 2023/4/7.
//
#include "iostream"
#include "vector"
#include "iomanip"
using namespace std;

double compute(int a, int b, char op){
    if(op == '+') return a + b;
    else if(op == '-') return a - b;
    else if(op == '*') return a * b;
    else return static_cast<float >(a) / b;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }

    int m;
    cin >> m;
    vector<int> t(m);
    vector<char> op(m);
    for (int i = 0; i < m; ++i) {
        cin >> t[i] >> op[i];
    }

    cout << fixed << setprecision(1);

    for (int i = 0; i < m; ++i) {
        int index = t[i];
        char opt = op[i];
        double res = sum - nums[index - 1] - nums[index];
        res += compute(nums[index - 1], nums[index], opt);
        cout << res << " ";
    }
    cout << endl;
    return 0;

}