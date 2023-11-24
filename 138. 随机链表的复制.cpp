class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;

        unordered_map<Node*,Node*> map;
        Node* p = head;

        while(p)
        {
            map[p]=new Node(p->val);
            p=p->next;
        }

        p=head;
        while(p)
        {
            map[p]->next = map[p->next];
            map[p]->random=map[p->random];
            p=p->next;
        }

        return map[head];
    }
};
