'''
Decode String
https://leetcode.com/problems/decode-string/

Created: 2025-02-12
Updated: 2025-02-12
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

class Solution:
  def decodeString(self, s: str) -> str:
    stack = []
    curNum, curString = 0, ""

    for c in s:
      if c == '[':
        stack.append(curString)
        stack.append(curNum)
        curString = ''
        curNum = 0
      elif c == ']':
        num = stack.pop()
        prevString = stack.pop()
        curString = prevString + num * curString
      elif c.isdigit():
        curNum = curNum * 10 + int(c)
      else:
          curString += c
    return curString


        