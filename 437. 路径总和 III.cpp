class Solution {
public:
    int ans;
    void dfs(TreeNode* root,long int sum)
    {
        if(root==nullptr)
        {
            return;
        }
        sum-=root->val;
        if(sum==0)
        {
            ans++;
        }
        dfs(root->left,sum);
        dfs(root->right,sum);
    }

    int pathSum(TreeNode* root,long int sum) {
        if(root)
        {
            dfs(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        return ans;
    }  
};
