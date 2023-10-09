class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>hash;
        for(auto str:strs)
        {
            string key=str;
            sort(key.begin(),key.end());
            hash[key].push_back(str);
        }
        for(auto k:hash)
        {
            res.push_back(k.second);
        }
        return res;
    }
};
