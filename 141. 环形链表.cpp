class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *>hash;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
           hash.insert(temp);
           temp=temp->next;
           if(hash.count(temp))
           {
               return true;
           }
        }
        return false;
    }
};
