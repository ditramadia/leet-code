'''
Concatenated Words
https://leetcode.com/problems/concatenated-words/

Created: 2025-01-27
Updated: 2025-01-27
Author: Ditra Amadia

O(n*m^2) time complexity
151ms runtime
'''

from typing import List

class Solution:
  def findAllConcatenatedWordsInADict(self, words: List[str]) -> List[str]:
    wordsSet = set(words)
    dp = {}

    def dfs(word):
      if word in dp:
        return dp[word]

      for i in range(1, len(word)):
        prefix = word[:i]
        suffix = word[i:]
        
        if ((prefix in wordsSet and suffix in wordsSet) or
          (prefix in wordsSet and dfs(suffix))):
          dp[word] = True
          return dp[word]
      dp[word] = False
      return dp[word]

    res = []
    for w in words:
      if dfs(w):
        res.append(w)
    return res
      