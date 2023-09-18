class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       int n=nums.size();
       int i=0;
       int j=0;
       for(j=0;j<n;j++)
       {
           for(i=j+1;i<n;i++)
           if(nums[j]+nums[i]==target)
           {
               return {j,i};
           }
       }
         return {};
    }
};
