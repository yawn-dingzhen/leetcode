class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int>result;
       int slen=s.size();
       int plen=p.size();
       if(slen<plen)
       {
           return {};
       }
       vector<int> sl(26);
       vector<int> pl(26);
       for(int i=0;i<plen;i++)
       {
           pl[p[i]-'a']++;
       }
       int slow=0;
       for(int fast=0;fast<slen;fast++)
       {
           sl[s[fast]-'a']++;
           if(fast>=plen)
           {
               sl[s[slow]-'a']--;
               slow++;
           }
           if(pl==sl)
           {
               result.push_back(slow);
           }
       }
       return result;
    }
};
