class Solution {
public:
        vector<int>num;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=nullptr)
        {
        num.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        }
        return num;
    }
};
