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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1 = headA;
        ListNode *l2= headB;
        int c1=0;
        int c2=0;
        while(l1)
        {
            c1++;
            l1=l1->next;
        }
        while(l2)
        {
            c2++;
            l2=l2->next;
        }
        l1 = headA;
        l2= headB;
        if(c1>c2)
        {
            for(int i=0;i<(c1-c2);i++)
                l1=l1->next;
        }
        else
        {
            for(int i=0;i<c2-c1;i++)
                l2=l2->next;
        }
        while(l1!=l2)
        {
            l1=l1->next;
            l2=l2->next;
        }
        return l1;
    }
};