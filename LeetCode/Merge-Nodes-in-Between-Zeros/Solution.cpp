class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        reader = head.next
        writer = head
        while reader:
            if reader.val: # reading non-zero values
                writer.val += reader.val
            elif reader.next: # found zero, reset writer to next position 
                writer = writer.next
                writer.val = 0
            else: # nothing to read anymore. cut off nodes after current writer
                writer.next = None
            reader = reader.next
        return head