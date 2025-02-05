'''
Max Consecutive Ones III
https://leetcode.com/problems/max-consecutive-ones-iii/

Created: 2025-02-06
Updated: 2025-02-06
Author: Ditra Amadia

O(n) time complexity
59ms runtime
'''

from typing import List

class Solution:
  def longestOnes(self, nums: List[int], k: int) -> int:
    l = mx = 0
    flip = k

    for r in range(len(nums)):
      if nums[r] == 0:
        flip -= 1
      while flip < 0:
        if nums[l] == 0:
          flip += 1
        l += 1
      mx = max(mx, r - l + 1)
    
    return mx 
    