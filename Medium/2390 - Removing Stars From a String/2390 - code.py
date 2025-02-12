'''
Removing Stars From a String
https://leetcode.com/problems/removing-stars-from-a-string/

Created: 2025-02-12
Updated: 2025-02-12
Author: Ditra Amadia

O(n) time complexity
88ms runtime
'''

class Solution:
  def removeStars(self, s: str) -> str:
    stack = []

    for c in s:
      if c != '*':
        stack.append(c)
      else:
        stack.pop()
    
    return ''.join(stack)