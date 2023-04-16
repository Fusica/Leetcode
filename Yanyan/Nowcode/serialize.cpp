//
// Created by 13176 on 2023/4/10.
//

#include "vector"
#include "algorithm"
#include "string"
#include "queue"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "";
        queue<TreeNode*> que;
        string output = "";
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* tmp = que.front();
                que.pop();
                if(tmp == NULL) {
                    output += "null,";
                }else{
                    output += (to_string(tmp->val) + ",");
                    que.push(tmp->left);
                    que.push(tmp->right);
                }
            }

        }
        return output.substr(0, output.size() - 1);

    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return NULL;
        vector<string> s = split(data);

        TreeNode* root = new TreeNode(stoi(s[0]));
        queue<TreeNode*> que;
        que.push(root);
        int i = 1;

        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* tmp = que.front();
                que.pop();
                if(s[i] != "null"){
                    tmp->left = new TreeNode(stoi(s[i]));
                    que.push(tmp->left);
                }
                i++;
                if(s[i] != "null"){
                    tmp->right = new TreeNode(stoi(s[i]));
                    que.push(tmp->right);
                }
                i++;
            }

        }
        return root;
    }

    vector<string> split(string s){
        vector<string> ans;
        int j;
        for(int i = 0; i < s.size(); i++){
            j = i;
            while(s[j] != ',' && j < s.size()) j++;
            ans.push_back(s.substr(i, j - i));
            i = j;
        }
        return ans;
    }
};
int main(){
    string s = "1,2,3,null,null,4,5";
    TreeNode* res = Codec().deserialize(s);
    return 0;
}

