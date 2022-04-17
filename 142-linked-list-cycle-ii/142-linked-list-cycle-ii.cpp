/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*
    logic behind the nested traversal
    s=l1+l2
    f= l1+l2+nC
    
    2(l1+l2)=L1+l2+nC
    l1+l2=nC
    l1=(nC-l2)
    
    */
    ListNode *detectCycle(ListNode *head) {
 

        if(head==NULL||head->next==NULL)
            return NULL;
        ListNode *fast=head;
                ListNode *slow=head;
while(fast->next and fast->next->next)
{
    fast=fast->next->next;
        slow=slow->next;
if(fast==slow)
  {
slow=head;int i=0;
    while(slow!=fast)
    {i++;
slow=slow->next;
    fast=fast->next;
    }
    return fast;
}
    
}
                    return NULL;
        
    }

};