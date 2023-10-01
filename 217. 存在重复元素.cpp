class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int v:nums)
        {
            hash[v]++;
        }
        for(auto ky:hash)
        {
            if(ky.second>1)
            {
                return true;
            }
        }
        return false;
    }
};
