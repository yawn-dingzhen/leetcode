class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>arr;
        arr.push(0);
        int max1=0;
        for(int i=1;i<prices.size();++i)
        {
            if(prices[i]<prices[arr.top()])
            {
                arr.push(i);
            }
            else
            {
                max1=max(max1,prices[i]-prices[arr.top()]);
            }
        }
       return max1;
    }
};
