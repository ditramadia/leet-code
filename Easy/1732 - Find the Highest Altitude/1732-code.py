'''
Find the Highest Altitude
https://leetcode.com/problems/find-the-highest-altitude/

Created: 2025-07-02
Updated: 2025-07-02
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def largestAltitude(self, gain: List[int]) -> int:
    mx = sm = 0
    for alt in gain:
      sm += alt
      mx = max(sm, mx)
    return mx