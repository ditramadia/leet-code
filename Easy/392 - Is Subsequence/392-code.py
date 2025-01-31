'''
Is Subsequence
https://leetcode.com/problems/is-subsequence/

Created: 2025-01-31
Updated: 2025-01-31
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

class Solution:
  def isSubsequence(self, s: str, t: str) -> bool:
    sp = 0
    tp = 0

    while sp < len(s) and tp < len(t):
      if s[sp] == t[tp]:
        sp += 1
      tp += 1
    
    return sp == len(s)

      