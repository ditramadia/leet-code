'''
Sum of Left Leaves
https://leetcode.com/problems/sum-of-left-leaves/

Created: 2025-02-10
Updated: 2025-02-10
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import Optional

class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
    if not root: return 0
    
    sm = 0
    
    if root.left:
      if not root.left.left and not root.left.right: sm += root.left.val
      else: sm += self.sumOfLeftLeaves(root.left)
    
    sm += self.sumOfLeftLeaves(root.right)

    return sm 