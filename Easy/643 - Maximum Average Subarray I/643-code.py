'''
Maximum Average Subarray I
https://leetcode.com/problems/maximum-average-subarray-i/

Created: 2025-02-05
Updated: 2025-02-05
Author: Ditra Amadia

O(n) time complexity
81ms runtime
'''

from typing import List

class Solution:
  def findMaxAverage(self, nums: List[int], k: int) -> float:
    cur = mx = sum(nums[:k])

    for i in range(k, len(nums)):
        cur += nums[i] - nums[i - k]
        mx = max(mx, cur)
    
    return mx/k