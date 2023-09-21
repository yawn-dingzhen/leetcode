class Solution {
public:
    bool isValid(string s) {
        stack<char> stack1;
        int size=s.size();
        for(int a=0;a<size;a++)
        {
            if(s[a]=='{'||s[a]=='['||s[a]=='(')
            {
                stack1.push(s[a]);
            }
            if(s[a]==')')
            {
                if(stack1.empty() ||stack1.top()!='(')
                {
                return false;
                }
                stack1.pop();
            }
            if(s[a]=='}')
            {
                if(stack1.empty() ||stack1.top()!='{')
                {
                return false;
                }
                stack1.pop();
            }
            if(s[a]==']')
            {
                if(stack1.empty() ||stack1.top()!='[')
                {
                return false;
                }
                stack1.pop();
            }
        }
        return stack1.empty();
    }
};
