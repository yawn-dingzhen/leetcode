class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>sum(nums.size());
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        int max=sum[0];
        int min=0;
        for(int i=0;i<sum.size();i++)
        {
            max=max>sum[i]-min?max:sum[i]-min;
            min=min<sum[i]?min:sum[i];
            
        }
        return max;
    }
};
