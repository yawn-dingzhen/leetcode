class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        unordered_set<ListNode*>hash;
        while(temp!=nullptr)
        {
            hash.insert(temp);
            temp=temp->next;
            if(hash.count(temp))
            {
                return temp;
            }
        }
        return nullptr; 
    }
};
