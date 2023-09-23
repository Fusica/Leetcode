//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode{
    int val;
    vector<TreeNode*> children;
    TreeNode(int x) : val(x){}
};

int minPath(TreeNode* root, unordered_map<int, bool>& targetNodes){
    if (!root) return 0;
    int covered = 0;
    for (TreeNode* child : root->children) {
        covered += minPath(child, targetNodes);
    }
    if (targetNodes[root->val]){
        targetNodes.erase(root->val);
        return 0;
    }

    return covered;
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<TreeNode*> nodes(n);

    for (int i = 0; i < n; ++i) {
        nodes[i] = new TreeNode(i+1);
    }

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        nodes[u - 1]->children.push_back(nodes[v-1]);
    }
    for (int i = 0; i < q; ++i) {
        int m;
        cin >> m;
        unordered_map<int, bool> targetNodes;
        for (int j = 0; j < m; ++j) {
            int ai;
            cin >> ai;
            targetNodes[ai] = true;
        }

        int minPaths = minPath(nodes[0], targetNodes);
        cout << minPaths << endl;
    }

    for (int i = 0; i < n; ++i) {
        delete nodes[i];
    }
    return 0;
}