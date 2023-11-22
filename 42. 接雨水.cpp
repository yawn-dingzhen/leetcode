class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>s;
        int ans=0;
        for(int i=0;i<height.size();i++)
        {
            while(!s.empty()&&height[s.top()]<=height[i])
            {
                int bh=height[s.top()];
                s.pop();
                if(s.empty())
                {
                    break;
                }
                int left=s.top();
                ans+=(min(height[left],height[i])-bh)*(i-left-1);
            }
            s.push(i);
        }
        return ans;
    }
};
