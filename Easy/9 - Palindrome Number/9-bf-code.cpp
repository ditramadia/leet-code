#include <cmath>

/**
 * Palindrome Number
 * Brute force
 * https://leetcode.com/problems/palindrome-number/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * @error: Error in test case 30
 * Line 22: Char 41: runtime error: 1e+10 is outside the range of representable values of type 'int' (solution.cpp)
 * @summary: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:31:41
 */

class Solution
{
public:
  bool isPalindrome(int x)
  {
    // handle special case
    if (x < 0 || (x != 0 && x % 10 == 0))
    {
      return false;
    }

    // get the number of digits
    int n = floor(log10(x)) + 1;

    // compare the digits using 2 iterators
    for (int i = 0; i < n / 2; i++)
    {
      int lhs = (x % static_cast<int>(pow(10, i + 1))) / pow(10, i);
      int rhs = (x % static_cast<int>(pow(10, n - 1))) / pow(10, n - 2);

      if (lhs != rhs)
      {
        return false;
      }
    }
    return true;
  }
};