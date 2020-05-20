class Solution {
public:
    
    void Inorder(vector<int>&BST, TreeNode* root) {
        if (root==nullptr)
            return;
        Inorder(BST, root->left);
        BST.push_back(root->val);
        Inorder(BST, root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> valueIndices;
        Inorder(valueIndices, root);
        return valueIndices[k-1];
    }
};
