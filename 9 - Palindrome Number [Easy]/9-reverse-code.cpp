/**
 * Palindrome Number
 * Reverse half of the digits
 * https://leetcode.com/problems/palindrome-number/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 * Inspired by: rahulvarma5297 (https://leetcode.com/problems/palindrome-number/solutions/3651712/2-method-s-c-java-python-beginner-friendly/)
 *
 * O(n) time complexity
 * 9ms runtime
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

    // reverse the digits
    int r = 0;
    while (r < x)
    {
      r = r * 10 + x % 10;
      x /= 10;
    }

    // comparing the first half of reverse and x
    return (r == x) || (r / 10 == x);
  }
};