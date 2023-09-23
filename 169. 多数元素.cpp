lass Solution {
public:
    int majorityElement(vector<int>& nums) {    
        unordered_map<int,int>map1;
        int size=nums.size();
        int len=size/2;
        for(int a:nums)
        {
            map1[a]++;
        }
        for(auto k:map1)
        {
            if(k.second>len)
            {
                return k.first;
            }
        }
        return 0;
    }
};
