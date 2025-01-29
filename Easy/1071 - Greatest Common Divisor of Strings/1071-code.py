'''
Greatest Common Divisor of Strings
https://leetcode.com/problems/greatest-common-divisor-of-strings/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(min(m,n)) time complexity
0ms runtime
'''

class Solution:
  def gcdOfStrings(self, str1: str, str2: str) -> str:
    len1, len2 = len(str1), len(str2)

    def isDivisor(i):
      if len(str1) % i or len(str2) % i:
        return False

      f1 = len(str1) // i
      f2 = len(str2) // i

      return str1[:i] * f1 == str1 and str1[:i] * f2 == str2 

    for i in range(min(len1, len2), 0, -1):
      if isDivisor(i):
        return str1[:i]
    
    return ""