
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        k=head
        while k:
            while k.next and k.val == k.next.val:
                k.next = k.next.next
            k = k.next
        return head