'''
Reverse Nodes in k-Group
https://leetcode.com/problems/reverse-nodes-in-k-group/

Created: 2025-01-25
Updated: 2025-01-25
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
  def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
    dummy = ListNode(0, head)
    group_prev = dummy

    def getKth(curr, k):
      while curr and k > 0:
        curr = curr.next
        k -= 1
      return curr

    while True:
      kth = getKth(group_prev, k)
      if not kth:
        break
      group_next = kth.next

      prev, curr = kth.next, group_prev.next
      while curr != group_next:
        temp = curr.next
        curr.next = prev
        prev = curr
        curr = temp

      temp = group_prev.next
      group_prev.next = kth
      group_prev = temp
    
    return dummy.next
      