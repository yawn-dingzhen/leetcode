class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
            swap(root);
            return root;
    }
    void swap(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        TreeNode* ptr=nullptr;
        ptr=root->left;
        root->left=root->right;
        root->right=ptr;
        swap(root->left);
        swap(root->right);
    }
};
