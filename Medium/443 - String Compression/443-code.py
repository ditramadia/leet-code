'''
String Compression
https://leetcode.com/problems/string-compression/

Created: 2025-01-29
Updated: 2025-01-29
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def compress(self, chars: List[str]) -> int:
    write = 0
    read = 0

    while read < len(chars):
      curr = chars[read]
      count = 0

      while read < len(chars) and chars[read] == curr:
        read += 1
        count += 1

      chars[write] = curr
      write += 1

      if count > 1:
        for digit in str(count):
          chars[write] = digit
          write += 1
    
    return write 

chars = ["a","a","b","b","c","c","c"]
print(Solution().compress(chars))