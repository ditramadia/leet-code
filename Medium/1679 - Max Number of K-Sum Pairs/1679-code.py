'''
Max Number of K-Sum Pairs
https://leetcode.com/problems/max-number-of-k-sum-pairs/

Created: 2025-01-31
Updated: 2025-01-31
Author: Ditra Amadia

O(n) time complexity
487ms runtime
'''

from typing import Counter, List

class Solution:
  def maxOperations(self, nums: List[int], k: int) -> int:
    c = Counter(nums)
    seen = set()
    res = 0

    for num in nums:
      if num not in seen and (k-num) in c:
        if num == (k-num):
          res += c[num] // 2
        else:
          res += min(c[num], c[k-num])
        seen.add(num)
        seen.add(k-num)
    
    return res


nums = [3,1,3,4,3]
k = 5
print(Solution().maxOperations(nums, k))