class Solution {
public:
    vector<int> twoSum(vector<int>& price, int target) {
        unordered_set<int>hash;
        for(int i=0;i<price.size();i++)
        {   
            if(hash.find(target-price[i])!=hash.end())
            {
                return {price[i],target-price[i]};
            }
            hash.insert(price[i]);
        }
        return {};
    }
};
