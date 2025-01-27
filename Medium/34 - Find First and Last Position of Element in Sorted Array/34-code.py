'''
Find First and Last Position of Element in Sorted Array
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

Created: 2025-01-28
Updated: 2025-01-28
Author: Ditra Amadia

O(log n) time complexity
0ms runtime
'''

class Solution:
  def searchRange(self, nums, target):
    l = 0
    r = len(nums) - 1
    res = [-1, -1]

    while l <= r and (res[0] == -1 or res[1] == -1):
      if nums[l] == target:
        res[0] = l
      else:
        l += 1

      if nums[r] == target:
        res[1] = r
      else: 
        r -= 1

    return res