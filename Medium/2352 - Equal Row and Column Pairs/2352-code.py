'''
Equal Row and Column Pairs
https://leetcode.com/problems/equal-row-and-column-pairs/

Created: 2025-02-11
Updated: 2025-02-11
Author: Ditra Amadia

O(n^2) time complexity
3ms runtime
'''

from typing import List, Counter

class Solution:
  def equalPairs(self, grid: List[List[int]]) -> int:
    grid_hash = Counter(tuple(row) for row in grid)

    t_grid = zip(*grid)
    t_grid_hash = Counter(tuple(row) for row in t_grid)

    match_dict = {}
    for key in grid_hash.keys() and t_grid_hash.keys():
      match_dict[key] = grid_hash[key] * t_grid_hash[key]

    return sum(match_dict.values()) 


grid = [[3,2,1],[1,7,6],[2,7,7]]
print(Solution().equalPairs(grid))
                