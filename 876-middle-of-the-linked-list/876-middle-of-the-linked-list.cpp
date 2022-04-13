/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
          if (head->next == NULL)
        return head;
        
        ListNode* c1=head;
        ListNode* c2=head->next->next;
        //ListNode* todelete;
        
        while(c2&&c2->next)
        {  c2=c2->next->next;
            c1=c1->next;
          
            
        }

        
        return c1->next;
        
    }
};