class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* cru=head;
        ListNode* prev = nullptr;
        ListNode* next=nullptr;
        
        while(cru!=nullptr){
            next=cru->next;
            cru->next = prev;
            prev=cru;
            cru=next;

        }
        head=prev;
        return head;
    }
};