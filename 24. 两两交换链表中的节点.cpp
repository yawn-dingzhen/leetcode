class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        {
            return head;
        }

        auto node1=head;
        auto node2=head->next;
        auto node3=head->next->next;

        node1->next=swapPairs(node3);
        node2->next=node1;

        return node2;
    }
};
