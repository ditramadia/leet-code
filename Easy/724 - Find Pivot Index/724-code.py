'''
Find Pivot Index
https://leetcode.com/problems/find-pivot-index/

Created: 2025-02-07
Updated: 2025-02-07
Author: Ditra Amadia

O(n) time complexity
1ms runtime
'''

from typing import List

class Solution:
  def pivotIndex(self, nums: List[int]) -> int:
    pre, post = 0, sum(nums)
    
    for i, x in enumerate(nums):
      post -= x

      if pre == post:
        return i

      pre += x
    
    return -1
