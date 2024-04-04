/**
 * Sqrt(x)
 * Newton's method approach
 * https://leetcode.com/problems/sqrtx
 *
 * Created: 2024-04-04
 * Updated: 2024-04-04
 * Author: Ditra Amadia
 *
 * O(log n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int mySqrt(int x)
  {
    if (x == 0)
      return 0;
    if (x == 1)
      return 1;

    long r = x / 2;
    while (r > x / r)
      r = (r + x / r) / 2;
    return r;
  }
};