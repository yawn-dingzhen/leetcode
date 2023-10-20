class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==nullptr||bo(root->left,root->right);
    }

    bool bo(TreeNode* L,TreeNode*R)
    {
        if(R==nullptr&&L==nullptr)
        {
            return true;
        }
        if(R==nullptr||L==nullptr||R->val!=L->val)
        {
            return false;
        }
        return bo(R->left,L->right)&&bo(R->right,L->left);
    }

};
