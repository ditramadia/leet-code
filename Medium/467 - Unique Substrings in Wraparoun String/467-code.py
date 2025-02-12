'''
Unique Substrings in Wraparound String
https://leetcode.com/problems/unique-substrings-in-wraparound-string/

Created: 2025-02-12
Updated: 2025-02-12
Author: Ditra Amadia

O(n) time complexity
49ms runtime
'''

class Solution:
  def findSubstringInWraproundString(self, s: str) -> int:
    dp = {c: 0 for c in 'abcdefghijklmnopqrstuvwxyz'}
    mx = 0

    for i in range(len(s)):
      if i > 0 and ord(s[i]) - ord(s[i - 1]) == 1 or (s[i] == 'a' and s[i - 1] == 'z'):
        mx += 1
      else:
        mx = 1
      
      dp[s[i]] = max(dp[s[i]], mx)
    
    return sum(dp.values())