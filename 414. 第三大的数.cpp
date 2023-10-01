class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>hash(nums.begin(),nums.end());
        int a=hash.size();
        if(a<3)
        {
            set<int>::iterator it=hash.end();
            it--;
            return *it;
        }
        if(a==3)
        {
            set<int>::iterator itt=hash.begin();
            return *itt;
        }
            set<int>::iterator last=hash.end();
            last--;
            last--;
            last--;
            return *last;
    }
};
