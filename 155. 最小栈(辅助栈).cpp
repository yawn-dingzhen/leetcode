class MinStack {
public:
    stack<int>stack1;
    stack<int>min;
    MinStack() {

    }
    
    void push(int val) {
    stack1.push(val);
    if(min.empty()||val<=min.top())
    {
        min.push(val);
    }
    }
    
    void pop() {
    if(stack1.top()==min.top())
    {
        min.pop();
    }
    stack1.pop();

    }
    
    int top() {
    return stack1.top();
    }
    
    int getMin() {
    return min.top();
    }
};
