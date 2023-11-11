class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;

        while(head1!=nullptr)
        {
            if(head2!=nullptr)
            {
                head1->val+=head2->val;
                head2=head2->next;
            }
            if(head1->next==nullptr&&head2!=nullptr)
            {
                head1->next=head2;
                break;
            }
            head1=head1->next;
        }

        merge(l1);
        return l1;
    }

    void merge(ListNode* head)
    {
        while(head!=nullptr)
        {
            if(head->val>=10)
            {
                head->val=head->val%10;
                if(head->next==nullptr)
                {
                    head->next=new ListNode(0);
                }
                head->next->val+=1;
            }
            head=head->next;
        }
    }
};
