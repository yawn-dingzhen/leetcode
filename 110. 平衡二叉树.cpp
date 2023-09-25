class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        {
            return true;
        }
        if(abs(hgt(root->right)-hgt(root->left))>1)
        {
            return false;
        }
        return isBalanced(root->right)&&isBalanced(root->left);
    }
    int hgt(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        return max(hgt(root->left),hgt(root->right))+1;
    }
};
