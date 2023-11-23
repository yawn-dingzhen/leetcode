class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr) return nullptr;
        if(root==q||root==p) return root;

        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);

        if(left!=nullptr&&right!=nullptr) return root;
        if(left!=nullptr) return left;
        if(right!=nullptr) return right;
        return nullptr;
    }
};
