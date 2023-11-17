class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()) return nullptr;
        TreeNode* root=new TreeNode;
        root->val=preorder[0];
        root->left=root->right=nullptr;

        auto it=find(inorder.begin(),inorder.end(),preorder[0]);
        vector<int>pl(preorder.begin()+1,preorder.begin()+1+(it-inorder.begin()));
        vector<int>pr(preorder.begin()+1+(it-inorder.begin()),preorder.end());
        vector<int>il(inorder.begin(),it);
        vector<int>ir(it+1,inorder.end());

        root->left=buildTree(pl,il);
        root->right=buildTree(pr,ir);

        return root;
    }
};
