/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector <int> v;
            int len = q.size();
            for (int i = 0; i < len; i++) {
                TreeNode * node = q.front();
                q.pop();
                if (node->left) {
                    q.push(node->left);
                    v.push_back(node->left->val);
                }
                else v.push_back(-101);
                if (node->right) {
                    q.push(node->right);
                    v.push_back(node->right->val);
                }
                else v.push_back(-101);
            }
            for (int i = 0; i < v.size(); i++) {
                if (v[i] != v[v.size() - 1 - i]) return false;
            }
        }
        return true;
    }
};