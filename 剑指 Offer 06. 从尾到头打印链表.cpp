class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
            ListNode* ahead=head;
            ListNode* x=nullptr;
            ListNode* y=nullptr;
            vector<int>arr;
            int a=0;
            while (ahead != nullptr)
        {
            x = ahead->next;
            ahead->next = y;
            y = ahead;
            ahead = x;
        }
        while(y!=nullptr)
        {
            a=y->val;
            arr.push_back(a);
            y=y->next;
        }
        return arr;
    }
};
