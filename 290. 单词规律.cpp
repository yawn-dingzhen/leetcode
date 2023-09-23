class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string>strin;
        string s1;
        while(ss>>s1)
        {
            strin.push_back(s1);
        }
        if(pattern.size()!=strin.size())
        return false;
        unordered_map<char,string>hash1;
        unordered_map<string,char>hash2;
        for(int i=0;i<pattern.size();i++)
        {
            char a=pattern[i];
            string b=strin[i];            
            if(hash1.count(a)&&hash1[a]!=b)
            return false;
            hash1[a]=b;
            if(hash2.count(b)&&hash2[b]!=a)
            return false;
            hash2[b]=a;
        }
        return true;
    }
};
