class Solution {
    priority_queue<int,vector<int>,less<int>>max;
public:
    int findKthLargest(vector<int>& nums, int k) {
        for(int val:nums)
        {
            max.push(val);
        }
        for(int i=0;i<k-1;i++)
        {
            max.pop();
        }
        return max.top();
    }
};
