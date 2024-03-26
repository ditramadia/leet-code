#include <string>

/**
 * Longest Palindromic Substring
 * Expand around center approach
 * https://leetcode.com/problems/longest-palindromic-substring/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 * Inspired by: Gourav-2002 (https://leetcode.com/problems/longest-palindromic-substring/solutions/4212564/beats-96-49-5-different-approaches-brute-force-eac-dp-ma-recursion/)
 *
 * O(n^2) time complexity
 * 11ms runtime
 */

class Solution
{
public:
  std::string longestPalindrome(std::string s)
  {
    if (s.length() <= 1)
    {
      return s;
    }

    std::string ret;

    auto expand_from_center = [&](int l, int r)
    {
      while (l >= 0 && r < s.length() && s[l] == s[r])
      {
        r++;
        l--;
      }
      return s.substr(l + 1, r - l - 1);
    };

    for (int i = 0; i < s.length(); i++)
    {
      std::string odd = expand_from_center(i, i);
      std::string even = expand_from_center(i, i + 1);
      std::string temp = odd.length() > even.length() ? odd : even;
      ret = ret.length() >= temp.length() ? ret : temp;
    }

    return ret;
  }
};