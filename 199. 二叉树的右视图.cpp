class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root)
        {
            queue<TreeNode*>q;
            q.push(root);
            int size=0;
            while(!q.empty())
            {
                size=q.size();
                while(size>0)
                {
                    size--;
                    TreeNode* node=q.front();
                    q.pop();
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                    if(size==0) ans.push_back(node->val);
                }
            }
        }
        return ans;
    }
};
