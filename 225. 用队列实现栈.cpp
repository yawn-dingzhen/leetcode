class MyStack {
public:
    queue<int>queueago;
    queue<int>queueafter;
    MyStack() {

    }
    
    void push(int x) {
        queueago.push(x);
    }
    
    int pop() {
    int size = queueago.size();
    while(size!=1)
    {
        queueafter.push(queueago.front());
        queueago.pop();
        size--;
    }
    int a =queueago.back();
    queueago.pop();
    queueago=queueafter;
    int size2=queueafter.size();
    while(size2!=0)
    {
        queueafter.pop();
        size2--;
    }
     return a;
    }
    
    int top() {
       return queueago.back();
    }
    
    bool empty() {
       return queueago.empty();
    }
};
