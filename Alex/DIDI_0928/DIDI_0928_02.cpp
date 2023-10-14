//
// Created by Max on 9/28/23.
//
#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (a >= i && b >= i && c >= i) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
