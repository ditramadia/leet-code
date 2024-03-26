#include <string>

/**
 * Zigzag Conversion
 * Brute force approach
 * https://leetcode.com/problems/zigzag-conversion/
 *
 * Created: 2024-03-26
 * Updated: 2024-03-26
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 3ms runtime
 */

class Solution
{
public:
  std::string convert(std::string s, int numRows)
  {
    if (!s.length() || numRows == 1)
      return s;

    std::string a[numRows];

    int r = 0;
    bool d = true;
    for (char c : s)
    {
      a[r] += c;

      if (r == numRows - 1)
        d = false;
      if (r == 0)
        d = true;

      r = d ? r + 1 : r - 1;
    }

    std::string ret = "";
    for (std::string str : a)
    {
      ret += str;
    }
    return ret;
  }
};