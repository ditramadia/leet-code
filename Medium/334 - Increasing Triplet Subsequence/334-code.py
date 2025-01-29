'''
Increasing Triplet Subsequence
https://leetcode.com/problems/increasing-triplet-subsequence/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
11ms runtime
'''

from typing import List, inf

class Solution:
  def increasingTriplet(self, nums: List[int]) -> bool:
    first = float(inf)
    second = float(inf)

    for n in nums:
      if n <= first:
        first = n
      elif n <= second:
        second = n
      else:
        return True
    return False
