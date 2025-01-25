'''
4Sum
https://leetcode.com/problems/generate-parentheses/

Created: 2025-01-25
Updated: 2025-01-25
Author: Ditra Amadia

O((4^n)/(sqrt(n))) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def generateParenthesis(self, n: int) -> List[str]:
    res = []

    def backtrack(combination, open, close):
      if open == close == n:
        res.append(combination)
        return
      
      if open < n:
        combination += "("
        backtrack(combination, open + 1, close)
        combination = combination[:-1]

      if open > close:
        combination += ")"
        backtrack(combination, open, close + 1)
        combination = combination[:-1]

    backtrack("", 0, 0)
    return res