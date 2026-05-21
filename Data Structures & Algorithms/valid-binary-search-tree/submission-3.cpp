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
    bool isValidBST(TreeNode* root) {
        if(root == nullptr) return true;

        queue<tuple<TreeNode*, long long, long long>> q;
        q.push({root, LLONG_MIN, LLONG_MAX});

        while (!q.empty()) {

            auto [curr, minVal, maxVal] = q.front();
            q.pop();

            if (curr->val <= minVal || curr->val >= maxVal)
                return false;

            if (curr->left) {
                q.push({curr->left, minVal, curr->val});
            }

            if (curr->right) {
                q.push({curr->right, curr->val, maxVal});
            }
        }
        return true;
    }
};
