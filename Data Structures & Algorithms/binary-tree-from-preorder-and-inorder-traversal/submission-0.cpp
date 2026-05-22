class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()){
            return nullptr;
        }

        int root = preorder[0];

        TreeNode* start = new TreeNode(root);
        vector<int> leftInorder;
        vector<int> rightInorder;
        vector<int> leftPreorder;
        vector<int> rightPreorder;

        auto it = find(inorder.begin(), inorder.end(), root);
        int idx = it - inorder.begin();

        for(int i = 0; i < idx; i++){
            leftInorder.push_back(inorder[i]);
        }

        for(int i = idx+1; i < inorder.size(); i++){
            rightInorder.push_back(inorder[i]);
        }

        for(int i = 1; i < leftInorder.size() + 1; i++){
            leftPreorder.push_back(preorder[i]);
        }

        for(int i = leftInorder.size() + 1; i < inorder.size(); i++){
            rightPreorder.push_back(preorder[i]);
        }

        start->left = buildTree(leftPreorder, leftInorder);
        start->right = buildTree(rightPreorder, rightInorder);

        return start;
    }
};
