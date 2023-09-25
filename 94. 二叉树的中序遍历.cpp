class Solution {
    vector<int>num;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root!=nullptr)
        {
            inorderTraversal(root->left);
            num.push_back(root->val);
            inorderTraversal(root->right);     
        }
        return num;
    }
};
