#include <iostream>
#include <vector>

using namespace std;

struct Product {
    int a, b, c, d;
};

int main() {
    int n;
    cin >> n;

    vector<Product> products(n);

    for (int i = 0; i < n; i++) {
        cin >> products[i].a;
    }

    for (int i = 0; i < n; i++) {
        cin >> products[i].b;
    }

    for (int i = 0; i < n; i++) {
        cin >> products[i].c;
    }

    for (int i = 0; i < n; i++) {
        cin >> products[i].d;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (products[i].a < products[i].b && products[i].c > products[i].d) {
            count++;
        } else if(products[i].a > products[i].b && products[i].c < products[i].d){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
