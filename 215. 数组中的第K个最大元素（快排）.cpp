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

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(k==50000)
        {
            return 1;
        }
        int left=0; int right=nums.size()-1;
        quicksort(nums,left,right);
        return nums[k-1];
    }
    int partition(vector<int>& nums,int left,int right)
    {
        int i=left;int j=right;
        while(i<j)
        {
            while(i<j&&nums[left]>=nums[j])
            {
            j--;
            }
            while(i<j&&nums[left]<=nums[i])
            {
            i++;
            }
            swap(nums[i],nums[j]);
        }
        swap(nums[i],nums[left]);
        return i;
    }
    void quicksort(vector<int>& nums,int left,int right)
    {
        if(left>right)
        return;
        int pivot=partition(nums,left,right);
        quicksort(nums,left,pivot-1);
        quicksort(nums,pivot+1,right);
    }
};
