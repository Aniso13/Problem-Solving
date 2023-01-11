/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* k=head;
    while(k)
    {
        while( k->next && k->val==k->next->val)
            k->next=k->next->next;
        k=k->next;
    }
    return head;
}