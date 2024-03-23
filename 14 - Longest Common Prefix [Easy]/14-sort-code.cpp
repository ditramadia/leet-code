#include <bits/stdc++.h>
#include <vector>
#include <string>

/**
 * Longest Common Prefix
 * Sort approach
 * https://leetcode.com/problems/longest-common-prefix/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 3ms runtime
 */

class Solution
{
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs)
  {
    std::string ret = "";

    if (strs.size() == 0)
    {
      return ret;
    }

    std::sort(strs.begin(), strs.end());

    for (int i = 0; i < strs[0].size(); i++)
    {
      char c = strs[0][i];
      if (c != strs[strs.size() - 1][i])
      {
        return ret;
      }

      ret += c;
    }
    return ret;
  }
};