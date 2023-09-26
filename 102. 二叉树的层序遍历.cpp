class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> queue;
        vector<vector<int>>ARR;
        if(root!=nullptr)
        {
        queue.push(root);
        }
        while(!queue.empty())
        {  
        vector<int>arr;
            for(int i=queue.size();i>0;i--)
            {
                TreeNode* node=queue.front();
                arr.push_back(node->val);
                queue.pop();
                if(node->left!=nullptr)
                {
                    queue.push(node->left);
                }
                if(node->right!=nullptr)
                {
                    queue.push(node->right);
                }
            }
        ARR.push_back(arr);
        }
        return ARR;
    }
};
