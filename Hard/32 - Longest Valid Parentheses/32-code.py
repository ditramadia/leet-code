'''
Longest Valid Parentheses
https://leetcode.com/problems/longest-valid-parentheses/

Created: 2025-01-28
Updated: 2025-01-28
Author: Ditra Amadia

O(N) time complexity
2ms runtime
'''

class Solution:
  def longestValidParentheses(self, s: str) -> int:
    mx = 0
    stack = [-1]

    for i, p in enumerate(s):
      if p == "(":
        stack.append(i)
      else:
        stack.pop()
        if not stack:
            stack.append(i)
        else:
            mx = max(mx, i - stack[-1])
    
    return mx