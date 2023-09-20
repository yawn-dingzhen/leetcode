class Solution {
public:
    bool isPalindrome(ListNode* head) {
    vector<int>ago;
    vector<int>after;
    while(head!=nullptr)
    {
        ago.push_back(head->val);
        head=head->next;
    }
    after=ago;
    reverse(ago.begin(),ago.end());
    if(ago==after)
    {
    return true;
    }
    else
    {
    return false;
    }
    }
};
