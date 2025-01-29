'''
Product of Array Except Self
https://leetcode.com/problems/product-of-array-except-self/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
19ms runtime
'''

from typing import List

class Solution:
  def productExceptSelf(self, nums: List[int]) -> List[int]:
    res = []

    pre = 1
    for i in range(0, len(nums)):
      res.append(pre)
      pre *= nums[i]
    
    post = 1
    for i in range(len(nums) - 1, -1, -1):
      res[i] *= post
      post *= nums[i]

    return res

nums = [1, 2, 3, 4]
print(Solution().productExceptSelf(nums))