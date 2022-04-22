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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{

    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    if (l1->val > l2->val)
        swap(l1, l2);
    ListNode *res = l1;
    while (l1 != NULL && l2 != NULL)
    {
        ListNode *tmp = NULL;
        while (l1 != NULL && l1->val <= l2->val)
        {
            tmp = l1;
            l1 = l1->next;
        }
        tmp->next = l2;
        swap(l1, l2);
    }
    return res;
}
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size()==0)
            return NULL;
        ListNode* ans=lists[0];

        for(int i=1;i<lists.size();i++)
        {
                       ans= mergeTwoLists(ans,lists[i]);

        }
        return ans;
    }
};