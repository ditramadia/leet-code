'''
Determine if Two Strings Are Close
https://leetcode.com/problems/determine-if-two-strings-are-close/

Created: 2025-02-11
Updated: 2025-02-11
Author: Ditra Amadia

O(n) time complexity
84ms runtime
'''

from typing import Counter

class Solution:
  def closeStrings(self, word1: str, word2: str) -> bool:
    if len(word1) != len(word2): return False

    counts1, counts2 = Counter(word1), Counter(word2)

    if set(counts1.keys()) != set(counts2.keys()): return False
    if sorted(counts1.values()) != sorted(counts2.values()): return False

    return True

word1 = "abc"
word2 = "bca"
print(Solution().closeStrings(word1, word2))  