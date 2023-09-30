class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>hash;
        for(int i:nums)
        {
            if(i!=0)
            {
                hash.insert(i);
            }
        }
        return hash.size();
    }
};
