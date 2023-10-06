class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast=0;int slow=0;
        for(fast=0;fast<nums.size();fast++)
        {
            if(nums[fast]!=0)
            {
                swap(nums[fast],nums[slow]);
                slow++;
            }
        }
    }
};
