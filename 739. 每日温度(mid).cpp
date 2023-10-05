class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>stack;
        int size=temperatures.size();
        vector<int>answer(size,0);
        stack.push(0);
        for(int i=1;i<size;i++)
        {
            if(temperatures[i]<=temperatures[stack.top()])
            {
                stack.push(i);
            }
            else
            {
                while(!stack.empty()&&temperatures[i]>temperatures[stack.top()])
                {
                    answer[stack.top()]=i-stack.top();
                    stack.pop();
                }
                stack.push(i);
            }
        }
        return answer;
    }
};
