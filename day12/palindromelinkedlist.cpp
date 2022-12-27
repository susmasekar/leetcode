class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode* th=head;
        while(th!=NULL)
        {
            s.push(th->val);
            th=th->next;
        }
        th=head;
        while(th!=NULL)
        {
            if(s.top()!=th->val)
            {
                return false;
            }
            s.pop();
            th=th->next;
        }
        return true;
    }
};
