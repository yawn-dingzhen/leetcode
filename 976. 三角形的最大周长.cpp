class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size()-1;
        for(int a=size;a>=2;a--)
        {
        int one=nums[a];int two=nums[a-1];int s=nums[a-2];
        if(two+s>one)
        return one+two+s;
        }
        return 0;
    }
};
