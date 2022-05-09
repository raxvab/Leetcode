/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteDuplicates(ListNode *head)
        {
            ListNode *dummy = head;
            while ( dummy  )
            {
           while(dummy->next and dummy->val == dummy->next->val)
                {
                 dummy->next = dummy->next->next;
                }
                dummy = dummy->next;
            }
            return head;
        }

};