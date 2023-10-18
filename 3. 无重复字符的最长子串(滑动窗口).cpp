class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int fast=0,slow=0,nowlength=0,maxlength=0;
        unordered_set<char> hash;
        while(fast<s.size())
        {
            if(!hash.count(s[fast]))
            {
                hash.insert(s[fast]);
                nowlength++;
                fast++;
                maxlength=max(nowlength,maxlength);
            }
            else
            {
                while(hash.count(s[fast]))
                {
                    hash.erase(s[slow]);
                    nowlength--;
                    slow++;
                }
                hash.insert(s[fast]);
                nowlength++;
                fast++;
            }
        }
        return maxlength;
    }
};
