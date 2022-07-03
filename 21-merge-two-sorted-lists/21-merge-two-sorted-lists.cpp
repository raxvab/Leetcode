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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      
//         if(l1==NULL)
//             return l2;
//         if(l2==NULL)
//             return l1;
        
//         ListNode* temp=new  ListNode(-1);
//                 ListNode* ptr1=l1;
// ListNode* ptr3=temp;
//                 ListNode* ptr2=l2;
        
        
//         while(ptr1!=NULL and ptr2!=NULL )
//         {
//             if(ptr1->val<ptr2->val)
//             {
//                 ptr3->next=ptr1;
//                 ptr1=ptr1->next;
//             }
//             else
//                 {
            
//                 ptr3->next=ptr2;
//                 ptr2=ptr2->next;
//             }
//             ptr3=ptr3->next;
//             }
        
//         while(ptr1)
//         {
//             ptr3->next=ptr1;
//             ptr1=ptr1->next;
//             ptr3=ptr3->next;
//         }
//          while(ptr2)
//         {
//             ptr3->next=ptr2;
//             ptr2=ptr2->next;
//             ptr3=ptr3->next;
//         }
        
//         return temp->next;
        
        //===== Recursive=====//
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        ListNode* result;
        if(l1->val<l2->val)
         {   result=l1;
        result->next=  mergeTwoLists(l1->next,l2);}
        else
        {
             result=l2;
            result->next=mergeTwoLists(l1,l2->next);
        }
        // result=l2;
        return result;
        
    }
};