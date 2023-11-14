class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        dfs(ans,root);
        int size=ans.size();
        for(int i=0;i<size-1;++i)
        {
            if(ans[i]>=ans[i+1])
            return false;
        }
        return true;
    }

    void dfs(vector<int> &res,TreeNode* root)
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
