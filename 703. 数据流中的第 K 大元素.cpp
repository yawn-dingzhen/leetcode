class KthLargest {
    int num;
    priority_queue<int,vector<int>,greater<int>> heap;
public:
    KthLargest(int k, vector<int>& nums) {
        num=k;
        for(int i:nums)
        {
            heap.push(i);
        }
        while(heap.size()>k)
        {
            heap.pop();
        }
    }
    
    int add(int val) {
        heap.push(val);
        if(heap.size()>num)
        {
            heap.pop();
        }
        return heap.top();
    }
};
