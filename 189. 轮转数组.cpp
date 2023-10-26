// 不超时方法
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();// 对k进行周期处理
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        // 1234567
        // 7654321
        // 5674321
        // 5671234
    }
};


// 超时法
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        while(k>0)
        {
            int left=nums[size-1];
            for(int i=size-1;i>0;--i)
            {
                nums[i]=nums[i-1];
            }
            nums[0]=left;
            k--;
        }
    }
};
