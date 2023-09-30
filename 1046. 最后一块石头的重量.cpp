class Solution {
    priority_queue<int,vector<int>,less<int>>maxheap;
public:
    int lastStoneWeight(vector<int>& stones) {
        for(int i:stones)
        {
            maxheap.push(i);
        }
        while(maxheap.size()!=1)
        {
            int first,second;
            first=maxheap.top();
            maxheap.pop();
            second=maxheap.top();
            maxheap.pop();
            if(first!=second)
            {
                int after=abs(first-second);
                maxheap.push(after);
            }
            if(first==second&&maxheap.size()==0)
            {
                return 0;
            }
        }
        return maxheap.top();
    }
};
