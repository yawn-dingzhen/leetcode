class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int res1=search(nums,target);
       int res2=res1;
       int left=res1;
       int right=res1;
       if(nums.size()==1&&res1!=-1)
       {
           return {0,0};
       }
       if(res1==-1)
       {
           return {-1,-1};
       }
       while(res1!=0&&nums[--res1]==target)
       {
          left=res1;
       }
       while(res2!=nums.size()-1&&nums[++res2]==target)
       {
           right=res2;
       }
       return {left,right};
       
    }

    int search(vector<int>& nums, int target)
    {
        int i=0; int j=nums.size()-1;
        int mid=0;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(nums[mid]<target)
            {
                i=mid+1;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};
