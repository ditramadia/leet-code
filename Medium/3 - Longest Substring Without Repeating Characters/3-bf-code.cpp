#include <string>

/**
 * Longest Substring Without Repeating Characters
 * Brute force approach
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * Created: 2024-03-24
 * Updated: 2024-03-24
 * Author: Ditra Amadia
 *
 * O(n^2) time complexity
 * 87ms runtime
 */

class Solution
{
public:
  int lengthOfLongestSubstring(std::string s)
  {

    if (s.length() == 0)
    {
      return 0;
    }

    int ret = 1;

    for (int i = 0; i < s.length(); i++)
    {
      std::string temp = "";
      temp += s[i];
      for (int j = i + 1; j < s.length(); j++)
      {
        char c = s[j];

        // if char exists in temp or end of std::string
        if (temp.find(c) != std::string::npos)
        {
          if (temp.length() > ret)
            ret = temp.length();
          break;
        }

        temp += c;

        if (j == s.length() - 1)
        {
          if (temp.length() > ret)
            ret = temp.length();
          break;
        }
      }
    }

    return ret;
  }
};