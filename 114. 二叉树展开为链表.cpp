class Solution {
    TreeNode* list=new TreeNode();
public:
    void flatten(TreeNode* root) {
        if(root==nullptr)
        {
            return;
        }

        list->right=root;
        list->left=nullptr;
        list=list->right;

        TreeNode* left=root->left;
        TreeNode* right=root->right;
        flatten(left);
        flatten(right);
    }
};
