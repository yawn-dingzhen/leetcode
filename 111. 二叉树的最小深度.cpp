class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        if(left&&right)
        {
            return min(left,right)+1;
        }
        else
        {
            return left+right+1; 
        }
    }
};
