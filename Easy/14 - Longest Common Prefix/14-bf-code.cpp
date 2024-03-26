#include <string>
#include <vector>

/**
 * Longest Common Prefix
 * Brute force approach
 * https://leetcode.com/problems/longest-common-prefix/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n^2) time complexity
 * 7ms runtime
 */

class Solution
{
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs)
  {
    std::string ret = "";
    char c;

    int i = 0;
    while (true)
    {
      c = strs.at(0)[i];
      for (std::string str : strs)
      {
        if (i == str.length() || str[i] != c)
        {
          return ret;
        }
      }
      ret += c;
      i++;
    }
  }
};