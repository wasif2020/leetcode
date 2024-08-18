# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverse(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head
        if head.next is None:
            return head
        curr=head;
        prev=None;
        while curr!=None:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
            
        return prev     
            
            
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head
        if head.next is None:
            return head
        
        curr_head=self.reverse(head)
        leader=curr_head.val
        curr=curr_head
        while(curr!=None and curr.next!=None):
            if curr.next.val<leader:
                curr.next=curr.next.next
                continue
            else:
                leader=curr.next.val
                curr=curr.next    
        
        
        new_head=self.reverse(curr_head)
        return new_head
        
        
        