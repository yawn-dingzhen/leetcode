class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(auto k:nums)
        {
            hash[k]++;
        }
        priority_queue<pair<int, int>> que;
        vector<int>res;
        for(auto ky:hash)
        {
            que.emplace(ky.second,ky.first);
        }
        while(k>0)
        {
            if(!que.empty())
            {
            res.push_back(que.top().second);
            que.pop();
            }
            k--;
        }
        return res;
    }
};
