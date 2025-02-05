'''
Longest Subarray of 1's After Deleting One Element
https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

Created: 2025-02-06
Updated: 2025-02-06
Author: Ditra Amadia

O(n) time complexity
58ms runtime
'''

from typing import List

class Solution:
  def longestSubarray(self, nums: List[int]) -> int:
    l = mx = 0
    rm = 1
    for r in range(len(nums)):
      if nums[r] == 0:
        rm -= 1
      while rm < 0:
        if nums[l] == 0:
          rm += 1
        l += 1
      mx = max(mx, r - l)

    return mx