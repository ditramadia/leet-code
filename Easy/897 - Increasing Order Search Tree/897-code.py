'''
Increasing Order Search Tree
https://leetcode.com/problems/increasing-order-search-tree/

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
  def increasingBST(self, root: Optional[TreeNode], child = None) -> Optional[TreeNode]:
    if not root: return child

    res = self.increasingBST(root.left, root)
    root.left = None
    root.right = self.increasingBST(root.right, child)
    
    return res