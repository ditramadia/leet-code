#include <climits>

/**
 * Reverse Integer
 * Reverse approach
 * https://leetcode.com/problems/reverse-integer/
 *
 * Created: 2024-03-28
 * Updated: 2024-03-28
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int reverse(int x)
  {
    int r = 0;
    while (x)
    {
      if (r > INT_MAX / 10 || r < INT_MIN / 10)
        return 0;
      r = r * 10 + x % 10;
      x /= 10;
    }
    return r;
  }
};