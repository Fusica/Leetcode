#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// 定义树的节点结构
struct TreeNode {
    int val;
    vector<TreeNode*> children;
    TreeNode(int x) : val(x) {}
};

// 递归函数，计算覆盖点集的最少路径数量
int minPathCover(TreeNode* root, unordered_map<int, bool>& targetNodes) {
    if (!root) return 0;

    int covered = 0;

    for (TreeNode* child : root->children) {
        covered += minPathCover(child, targetNodes);
    }

    if (targetNodes[root->val]) {
        targetNodes.erase(root->val);  // 从目标节点集中移除已覆盖的节点
        return 0;
    }

    return covered;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<TreeNode*> nodes(n);

    // 构建树的节点
    for (int i = 0; i < n; i++) {
        nodes[i] = new TreeNode(i + 1);
    }

    // 构建树的边关系
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        nodes[u - 1]->children.push_back(nodes[v - 1]);
    }

    // 处理每次询问
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;

        unordered_map<int, bool> targetNodes;

        for (int j = 0; j < m; j++) {
            int ai;
            cin >> ai;
            targetNodes[ai] = true;
        }

        int minPaths = minPathCover(nodes[0], targetNodes);

        cout << minPaths << endl;
    }

    // 释放节点内存
    for (int i = 0; i < n; i++) {
        delete nodes[i];
    }

    return 0;
}
