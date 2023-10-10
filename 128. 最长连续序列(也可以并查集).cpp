class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlen=1;int curlen=1;
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        {
            return 0;
        }
        if(nums.size()==1)
        {
            return 1;
        }
        for(int i=0;i<nums.size()-1;++i)
        {
            if((nums[i]+1)==nums[i+1])
            {
                curlen++;
                maxlen = max(maxlen, curlen);
            }
            else if(nums[i]==nums[i+1])
            {
                continue;
            }
            else
            {
                curlen=1;
            }       
        }
        return maxlen;
    }
};
