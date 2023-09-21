class MyQueue {
public:
    stack<int>ago;
    stack<int>after;
    MyQueue() {

    }
    
    void push(int x) {
        ago.push(x);
    }
    
    int pop() {
        int size=ago.size();
        int size1=size-1;
        while(size!=1)
        {
            after.push(ago.top());
            ago.pop();
            size--;
        }
        int a=ago.top();
        ago.pop();
        while(size1!=0)
        {
            ago.push(after.top());
            after.pop();
            size1--;
        }
        return a;
    }
    
    int peek() {
        int size2=ago.size();
        int size3=size2;
        while(size2!=0)
        {
            after.push(ago.top());
            ago.pop();
            size2--;
        }
        int b=after.top();
        while(size3!=0)
        {
            ago.push(after.top());
            after.pop();
            size3--;
        }
        return b;
    }
    
    bool empty() {
        return ago.empty();
    }
};
