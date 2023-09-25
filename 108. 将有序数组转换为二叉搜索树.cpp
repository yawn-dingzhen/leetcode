class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
            return sort(nums,0,nums.size()-1);
    }
    TreeNode* sort(vector<int>& nums,int left,int right) {
            if(left>right)
            {
                return nullptr;
            }
            int mid=(left+right)/2;
            TreeNode* root=new TreeNode(nums[mid]);
            root->left=sort(nums,left,mid-1);
            root->right=sort(nums,mid+1,right);
            return root;
    }
};
