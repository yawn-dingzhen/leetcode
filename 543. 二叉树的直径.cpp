class Solution {
public:
    int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        d(root);
        return ans;
    }
        int d(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int lh=d(root->left);
        int rh=d(root->right);
        ans=max(ans,lh+rh);
        return max(lh,rh)+1;
    }
};
