'''
Kids with The Greatest Number of Candies
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
    res = [False] * len(candies)
    
    mx = max(candies)

    for i, candy in enumerate(candies):
      if candy + extraCandies >= mx:
        res[i] = True

    return res