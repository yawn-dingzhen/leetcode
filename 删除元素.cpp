class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int a=nums.size();
       int b=0;
       int i=0;
        for(i=0;i<a;i++)
        {
            if(nums[i]!=val)
            {
                nums[b++]=nums[i];             
            }
        }
        return b;
    }
};
