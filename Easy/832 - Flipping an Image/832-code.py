'''
Flipping an Image
https://leetcode.com/problems/flipping-an-image/

Created: 2025-02-10
Updated: 2025-02-10
Author: Ditra Amadia

O(nm) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
    res = []
    
    def flip(row: List[int]) -> List[int]:
      res = row
      for i in range(0, len(row)//2):
        res[i], res[(i + 1) * -1] = res[(i + 1) * -1], res[i] 
      return res

    def invert(row: List[int]) -> List[int]:
      res = row
      for i, n in enumerate(row):
        if n: res[i] = 0
        else: res[i] = 1
      return res 

    for row in image:
      res.append(invert(flip(row)))

    return res