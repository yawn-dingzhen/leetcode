class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        hash[0]=1;
        int sum=0;
        int count=0;
        for(auto a:nums)
        {
            sum+=a;
            if(hash.count(sum-k))
            {
                count+=hash[sum-k];
            }
            hash[sum]++;  
        }
        return count;
    }
};
