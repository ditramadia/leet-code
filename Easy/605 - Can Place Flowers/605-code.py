'''
Can Place Flowers
https://leetcode.com/problems/can-place-flowers/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
    if not n:
      return True

    count = 0
    for i, flower in enumerate(flowerbed):
      if flower:
        continue

      if (i > 0 and flowerbed[i-1]) or (i < len(flowerbed) - 1 and flowerbed[i+1]):
        continue

      flowerbed[i] = 1
      n -= 1
      if not n:
        return True
    
    return False