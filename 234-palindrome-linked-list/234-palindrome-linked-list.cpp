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

        ListNode* reverse(ListNode* &head)
        {
            ListNode *newhead = NULL;
            while (head != NULL)
            {
                ListNode *next = head->next;
                head->next = newhead;
                newhead = head;
                head = next;
            }
            return newhead;
        }

    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;
        ListNode *slow = head;
        ListNode *fast = head->next;
        ListNode *temp = head;
        while (fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = reverse(slow->next);

        while (temp != slow->next and fast)
        {
            if (temp->val != fast->val)
                return false;
            temp = temp->next;
            fast = fast->next;
        }
        return true;
    }
};