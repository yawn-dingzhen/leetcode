class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    unordered_map<int,int>hash;
     vector<string>answer(score.size());
     int len=score.size();
     for(int i=0;i<score.size();i++)
     {
         hash[score[i]]=i;
     }
    sort(score.begin(),score.end());
    for(int i=0;i<len;i++)
    {
        if(len-i>3)
        {
            answer[hash[score[i]]]=to_string(len-i);
        }
        if(len-i==1)
        {
            answer[hash[score[i]]]="Gold Medal";
        }
        if(len-i==2)
        {
            answer[hash[score[i]]]="Silver Medal";
        }
        if(len-i==3)
        {
            answer[hash[score[i]]]="Bronze Medal";
        }
    }
    return answer;
    }
};
