'''
Reverse Vowels of a String
https://leetcode.com/problems/reverse-vowels-of-a-string/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
4ms runtime
'''

class Solution:
  def reverseVowels(self, s: str) -> str:
    vowels = set("aeiouAEIOU")
    s_arr = list(s)
    l, r = 0, len(s) - 1

    while l < r:
      if s_arr[l] in vowels and s_arr[r] in vowels:
        s_arr[l], s_arr[r] = s_arr[r], s_arr[l]
        l += 1
        r -= 1

      if s_arr[l] not in vowels:
        l +=1
      
      if s_arr[r] not in vowels:
        r -= 1
    
    return "".join(s_arr)