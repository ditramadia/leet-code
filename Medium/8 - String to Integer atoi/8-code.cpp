#include <string>

/**
 * String to Integer atoi
 * Reverse half of the digits
 * https://leetcode.com/problems/string-to-integer-atoi/
 *
 * Created: 2024-03-29
 * Updated: 2024-03-29
 * Author: Ditra Amadia
 * Inspired by: yuruofeifei (https://leetcode.com/problems/string-to-integer-atoi/solutions/4654/my-simple-solution/)
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int myAtoi(std::string s)
  {
    int ret;
    int m = 1;
    int r = 0;
    int i = 0;

    // skip leading spaces
    while (s[i] == ' ')
      i++;

    // check for sign
    if (s[i] == '-')
    {
      m = -1;
      i++;
    }
    else if (s[i] == '+')
    {
      i++;
    }

    // check is digit
    while (s[i] >= '0' && s[i] <= '9' && i < s.length())
    {

      // check if overflow
      if (r > (INT_MAX - (s[i] - '0')) / 10)
        return m == 1 ? INT_MAX : INT_MIN;

      r = r * 10 + (s[i] - '0');
      i++;
    }
    return r * m;
  }
};