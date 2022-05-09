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
       	//youtube help https://www.youtube.com/watch?v=R6-PnHODewY
        ListNode* deleteDuplicates(ListNode *head)
        {
            // if (head == NULL || head->next == NULL)
            //     return head;

            ListNode *dummy =new ListNode(0,head);
            ListNode *prev = dummy;

            while (head != NULL)
            {
                if (head->next!=NULL and head->val == head->next->val)

                {
                    while (head->next!=NULL and head->val == head->next->val)
                    head = head->next;
                    
                    prev->next = head->next;
                }
                else
                prev = prev->next;

                head = head->next;
            }
          return dummy->next;
        }
};