class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* first=head;
        ListNode* newlist=nullptr;
        ListNode* second=head;
        while(first!=nullptr)
        {
            second=first->next;
            first->next=newlist;
            newlist=first;
            first=second;
        }
        return newlist;
    }
};
