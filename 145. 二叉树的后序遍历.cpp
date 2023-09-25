class Solution {
public:
    vector<int>num;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=nullptr)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            num.push_back(root->val);
        }
        return num;
    }
};
