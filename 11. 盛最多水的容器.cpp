class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int max1=0;
        while(left<right)
        {
            int s=(right-left)*min(height[left],height[right]);
            max1=max(max1,s);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max1;
    }
}
