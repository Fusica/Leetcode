//
// Created by Max on 4/3/23.
//
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    static vector<int> printNumbers(int n) {
        // 空
    }
};

ListNode* create(){
    auto dummyhead = new ListNode(-1), cur = dummyhead;
    while(1){
        int x;
        cin >> x;
        if(x != -1){
            auto node = new ListNode(x);
            cur = cur->next = node;
        } else{
            break;
        }
    }
    auto head = dummyhead->next;
    delete dummyhead;
    return head;
}

int main() {
    auto head = create();
    cout << head->val;
    return 0;
}
