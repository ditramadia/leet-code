'''
Container With Most Water
https://leetcode.com/problems/container-with-most-water/

Created: 2025-01-31
Updated: 2025-01-31
Author: Ditra Amadia

O(n) time complexity
67ms runtime
'''

from typing import List

class Solution:
  def maxArea(self, height: List[int]) -> int:
    mx, i, j = 0, 0, len(height) - 1

    while i < j:
      area = min(height[i],height[j]) * (j - i)
      if area > mx:
        mx = area
      
      if height[i] < height[j]:
        i += 1
      else:
        j -= 1
    
    return mx

height = [1,8,6,2,5,4,8,3,7]
print(Solution().maxArea(height))