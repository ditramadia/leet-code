'''
Substring with Concatenation of All Words
https://leetcode.com/problems/substring-with-concatenation-of-all-words/

Created: 2025-01-27
Updated: 2025-01-27
Author: Ditra Amadia

O(N * M) time complexity
17ms runtime
'''

from typing import List

class Solution:
  def findSubstring(self, s: str, words: List[str]) -> List[int]:
    word_length = len(words[0])
    word_count = len(words)
    string_length = len(s)

    word_freq = {}
    for word in words:
      word_freq[word] = word_freq.get(word, 0) + 1

    res = []

    for i in range(word_length):
      l = i
      r = i
      current_freq = {}
      count = 0

      while r + word_length <= string_length:
        word = s[r:r + word_length]
        r += word_length

        if word in word_freq:
          current_freq[word] = current_freq.get(word, 0) + 1
          count += 1

          while current_freq[word] > word_freq[word]:
            left_word = s[l:l + word_length]
            current_freq[left_word] -= 1
            count -= 1
            l += word_length

          if count == word_count:
            res.append(l)

        else:
          current_freq.clear()
          count = 0
          l = r

    return res
      