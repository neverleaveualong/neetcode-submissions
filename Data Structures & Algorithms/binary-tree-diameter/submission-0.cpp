
class Solution {
public:
    int answer = 0 ;

    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        
        int left = dfs(root->left);
        int right = dfs(root->right);

        answer = max(answer, left+right);

        return max(left,right) + 1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return answer;
    }
};