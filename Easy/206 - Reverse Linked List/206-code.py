'''
Reverse Linked List
https://leetcode.com/problems/reverse-linked-list/

Created: 2025-01-26
Updated: 2025-01-26
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev, curr = None, head

        while True:
            if not curr:
                break
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
        
        return prev


        