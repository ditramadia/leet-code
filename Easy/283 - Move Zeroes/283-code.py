'''
Move Zeroes
https://leetcode.com/problems/move-zeroes/

Created: 2025-01-31
Updated: 2025-01-31
Author: Ditra Amadia

O(n) time complexity
3ms runtime
'''

from typing import List

class Solution:
  def moveZeroes(self, nums: List[int]) -> None:
    r, l = 0, 0
    while r < len(nums):
        if nums[r] != 0:
            nums[r], nums[l] = nums[l], nums[r]
            l += 1
        r += 1
