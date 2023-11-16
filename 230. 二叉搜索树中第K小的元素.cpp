class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        dfs(ans,root);
        return ans[k-1];
    }

    void dfs(vector<int>& res,TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }

        dfs(res,root->left);
        res.push_back(root->val);
        dfs(res,root->right);
    }
};
