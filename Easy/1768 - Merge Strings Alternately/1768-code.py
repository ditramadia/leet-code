'''
Merge Strings Alternately
https://leetcode.com/problems/merge-strings-alternately/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
35ms runtime
'''

class Solution:
  def mergeAlternately(self, word1: str, word2: str) -> str:
    res = ""

    i = 0
    while i < len(word1) and i < len(word2):
      if i < len(word1):
        res += word1[i]
      if i < len(word2):
        res += word2[i]
      i += 1
    res = res + word1[i:] + word2[i:]

    return res