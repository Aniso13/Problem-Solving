/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode k = head;
        while (k!= null)
        {
            while(k.next!= null && k.val==k.next.val)
                k.next=k.next.next;
            k=k.next;
        }
        return head;
    }
}