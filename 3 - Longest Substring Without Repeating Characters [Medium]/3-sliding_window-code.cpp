#include <string>
#include <unordered_map>
#include <algorithm>

/**
 * Longest Substring Without Repeating Characters
 * Sliding window approach
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * Created: 2024-03-25
 * Updated: 2024-03-25
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 10ms runtime
 */

class Solution
{
public:
  int lengthOfLongestSubstring(std::string s)
  {
    std::unordered_map<char, int> m;
    int ret = 0;
    int l = 0;

    for (int r = 0; r < s.length(); r++)
    {
      char c = s[r];

      if (m.count(c) == 0 || m[c] < l)
      {
        m[c] = r;
        ret = std::max(ret, r - l + 1);
      }
      else
      {
        l = m[c] + 1;
        m[c] = r;
      }
    }

    return ret;
  }
};