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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
 // optimal two pointer approach baabeeeyyyeeehhh

    ListNode*silo = head; //phast=1;
   ListNode*phast = head;
   for (int i = 0; i <n; i++)
       {
    if (i==n-1&&phast->next==NULL)
    {
        // if the length of linkedlist is equal to the given position form the end point
        //  then that means it wants us to delete the head itself
        ListNode *t = head;
        head = head->next;
        delete t;
        return head;
    }
     phast = phast->next;
    }
    //here the main logic is that the fast pointer will reach end
    // and eventually maintain the gap of n value to the slow pointer
    // then we'll simply delete slow->next
    while (phast && phast->next != NULL)
    {
        phast = phast->next;
        silo = silo->next;
    }
ListNode*todelete = silo->next;
    silo->next = silo->next->next;
    delete todelete;
    return head;
    }
};