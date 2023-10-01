class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;int right=nums.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            int m=mid;
            if(nums[mid]>target)
            {
                right=m-1;
            }
            if(nums[mid]<target)
            {
                left=m+1;
            }
            if(nums[mid]==target)
            {
                return mid;
            }
        }
            return -1;
    }
}
