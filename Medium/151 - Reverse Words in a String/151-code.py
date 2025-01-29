'''
Reverse Words in a String
https://leetcode.com/problems/reverse-words-in-a-string/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

class Solution:
  def reverseWords(self, s: str) -> str:
    return " ".join(s.split()[::-1])
  
s = "   Hello  World   "
print(Solution().reverseWords(s))