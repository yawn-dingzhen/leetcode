class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       unordered_set<ListNode *> hash;
       ListNode *tmp=headA;
       while(tmp!=nullptr)
       {
           hash.insert(tmp);
           tmp=tmp->next;
       }
      ListNode * tmpa=headB;
       while(tmpa!=nullptr)
       {
           if(hash.count(tmpa))
           {
               return tmpa;
           }
           tmpa=tmpa->next;
       }
       return nullptr;
    }
};
