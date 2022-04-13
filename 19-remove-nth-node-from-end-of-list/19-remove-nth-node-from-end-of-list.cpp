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
//         if (head == NULL||head->next==NULL)
// return head;
       ListNode* d=head;
    int c=1;
    while(d->next!=NULL)
    {
        d=d->next;
        c++;
    }
    if(c==n)
    {
//if the length of linkedlist is equal to the given position form the end point
// then that means it wants us to delete the head itself        
 ListNode* t= head;
head=head->next;
delete t;
return head ;
    }
    c=c-n;
    int c2=1;
 ListNode* t1=head;
while(t1->next!=NULL&&c2<c){
    t1=t1->next;
c2++;
}
 ListNode* todelete=t1->next;
t1->next=t1->next->next;
delete todelete;
return head;
    }
};