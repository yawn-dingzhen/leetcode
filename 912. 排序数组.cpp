class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int right=nums.size()-1;
        mergesort(nums,0,right);
        return nums;
    }

    void merge(vector<int>& nums,int left,int mid,int right)
    {
        vector<int>temp(right-left+1);
        int i=left;
        int j=mid+1;
        int k=0;
        while(i<=mid&&j<=right)
        {
            if(nums[i]<nums[j])
            {
                temp[k++]=nums[i++];
            }
            else
            {
                temp[k++]=nums[j++];
            }
        }
            while(i<=mid)
            {
                temp[k++]=nums[i++];
            }
            while(j<=right)
            {
                temp[k++]=nums[j++];
            }
            for(k=0;k<temp.size();k++)
            {
                nums[left+k]=temp[k];
            }
    }

    void mergesort(vector<int>& nums,int left,int right)
    {     
        if(left>=right)
        {
            return;
        }  
        int mid=(right+left)/2;
        mergesort(nums,left,mid);
        mergesort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
};
