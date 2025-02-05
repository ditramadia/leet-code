'''
Maximum Number of Vowels in a Substring of Given Length
https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

Created: 2025-02-06
Updated: 2025-02-06
Author: Ditra Amadia

O(k) time complexity
74ms runtime
'''

class Solution:
  def maxVowels(self, s: str, k: int) -> int:
    vowels = {"a","i","u","e","o"}
    
    count = 0
    for c in s[:k]:
        if c in vowels:
            count += 1
    mx = count
    
    for i in range(k, len(s)):
      if s[i] in vowels:
        count += 1
      if s[i-k] in vowels:
        count -= 1
      
      mx = max(mx, count)
      if mx == k:
        return mx
      
    return mx