class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
            unordered_map<int,int>hash;
            vector<int>arr;
            int size=nums.size();
            for(int n:nums)
            {
                hash[n]++;
            }
            for(int i=1;i<size+1;i++)
            {
                if(hash[i]==0)
                arr.push_back(i);
            }
            return arr;
    }
};
