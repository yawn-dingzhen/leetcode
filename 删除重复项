class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length=nums.size();
        int j=0;
        int i=0;
        for(i=0;i<length-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[j]=nums[i];
                j++;
            }           
        } 
        nums[j]=nums[length-1];
        j++;
        return j;    
    }
};
