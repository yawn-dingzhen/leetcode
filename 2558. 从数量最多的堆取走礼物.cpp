class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int,vector<int>,less<int>>maxheap;
        for(auto k:gifts)
        {
            maxheap.push(k);
        }
        int topnum;
        for(int i=0;i<k;++i)
        {
            topnum=maxheap.top();
            maxheap.pop();
            maxheap.push(sqrt(topnum));
        }
        long long sum=0;
        while(!maxheap.empty())
        {
            sum+=maxheap.top();
            maxheap.pop();
        }
        return sum;
    }
};
