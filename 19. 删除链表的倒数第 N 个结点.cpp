class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=new ListNode(0,head);
        ListNode* cur=head;
        ListNode* pre=temp;
        for(int i=0;i<n;++i)
        {
            cur=cur->next;
        }
        while(cur!=nullptr)
        {
            cur=cur->next;
            pre=pre->next;
        }

        pre->next=pre->next->next;
        return temp->next;
    }
};
