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


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast=0;int slow=0;
        for(fast=0;fast<nums.size();fast++)
        {
            if(nums[fast]!=val)
            {
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
        return slow;
     
    }
};
