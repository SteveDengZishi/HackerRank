# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l3 = ListNode(0);
        # mark head as return and l3 can traverse
        head = l3
        # carry to remeber sum > 10 to the next digit
        carry = 0
        
        # init calc for the current digit
        l3.val = (l1.val + l2.val + carry) % 10
        carry = (l1.val + l2.val + carry) // 10
        
        # if any of them has child or carry
        while l1.next != None or l2.next != None or carry:
            # create next link, and move forward
            l3.next = ListNode(0)
            l3 = l3.next
            
            l1_val = 0
            l2_val = 0
            # when they are not None, move forward
            if l1.next != None:
                l1 = l1.next
                l1_val = l1.val

            if l2.next != None:
                l2 = l2.next
                l2_val = l2.val
                
            l3.val = (l1_val + l2_val + carry) % 10
            carry = (l1_val + l2_val + carry) // 10
            
        return head
