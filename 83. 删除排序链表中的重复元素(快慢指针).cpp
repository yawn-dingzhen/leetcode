class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* p=head;
        while(fast->next!=nullptr)
        {
            if(fast->val==fast->next->val)
            {
                fast=fast->next;
            }
            else
            {
                fast=fast->next;
                slow=fast;
                p->next=slow;
                p=slow;
            }
        }
        p->next=nullptr;
        return head;
    }
};


lass Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* fast=head;
        ListNode* p=head;
        while(fast->next!=nullptr)
        {
            if(fast->val==fast->next->val)
            {
                fast=fast->next;
            }
            else
            {
                fast=fast->next;  
                p->next=fast;
                p=fast;
            }
        }
        p->next=nullptr;
        return head;
    }
};
