'''
Divide Two Integers
https://leetcode.com/problems/divide-two-integers/

Created: 2025-01-26
Updated: 2025-01-26
Author: Ditra Amadia

O(log n) time complexity
0ms runtime
'''

class Solution:
  def divide(self, dividend: int, divisor: int) -> int:
    INT_MAX = 2**31 - 1
    INT_MIN = -2**31

    if divisor == 1:
      return dividend
    if divisor == -1:
      return INT_MAX if dividend == INT_MIN else -dividend
    
    is_neg = (dividend < 0) ^ (divisor < 0)

    dividend, divisor = abs(dividend), abs(divisor)

    res = 0
    while dividend >= divisor:
      temp_divisor, n_shifts = divisor, 0

      while dividend >= (temp_divisor << 1):
        temp_divisor <<= 1
        n_shifts += 1
      
      dividend -= temp_divisor
      res += (1 << n_shifts)
    
    res = -res if is_neg else res

    return max(min(res, INT_MAX), INT_MIN)