'''
Search in Rotated Sorted Array
https://leetcode.com/problems/search-in-rotated-sorted-array/

Created: 2025-01-28
Updated: 2025-01-28
Author: Ditra Amadia

O(log n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def search(self, nums: List[int], target: int) -> int:
    for i in range(len(nums)):
      if nums[i] == target:
        return i
      elif nums[len(nums) - 1 - i] == target:
        return len(nums) - 1 - i
    return -1
                