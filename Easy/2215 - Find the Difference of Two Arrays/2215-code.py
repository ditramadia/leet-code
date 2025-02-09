'''
Find the Difference of Two Arrays
https://leetcode.com/problems/find-the-difference-of-two-arrays/

Created: 2025-02-09
Updated: 2025-02-09
Author: Ditra Amadia

O(n) time complexity
2ms runtime
'''

from typing import List

class Solution:
  def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
    a = set(nums1) - set(nums2)
    b = set(nums2) - set(nums1)
    return [list(a),list(b)]

        