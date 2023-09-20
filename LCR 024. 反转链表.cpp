class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* z=head;
        ListNode* x=nullptr;
        ListNode* y=nullptr;
        if (z == nullptr)
        {
        return z;
        }
        while(z!=nullptr)
        {
            x=z->next;
            z->next=y;
            y=z;
            z=x;
        }
        return y;
    }
};
