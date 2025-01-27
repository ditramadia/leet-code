'''
Next Permutation
https://leetcode.com/problems/next-permutation/

Created: 2025-01-27
Updated: 2025-01-27
Author: Ditra Amadia

O(n * log n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def nextPermutation(self, nums: List[int]) -> None:
    n = len(nums)
    
    if n == 1:
      return

    peak = -1
    for i in range(1, n):
      if nums[i] > nums[i - 1]:
        peak = i

    if peak < 0:
      for i in range(0, int(n/2)):
        nums[i], nums[n - i - 1] = nums[n - i - 1], nums[i]
      return
    
    candidate = peak
    target = peak - 1
    for i in range(peak, n):
      if nums[i] > nums[target] and nums[i] < nums[candidate]:
        candidate = i
    nums[target], nums[candidate] = nums[candidate], nums[target]
    nums[target + 1:] = sorted(nums[target + 1:])