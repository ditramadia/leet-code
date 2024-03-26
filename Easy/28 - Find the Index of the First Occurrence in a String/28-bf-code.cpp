#include <string>

/**
 * Find the Index of the First Occurrence in a String
 * Brute force approach
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 *
 * Created: 2024-03-24
 * Updated: 2024-03-24
 * Author: Ditra Amadia
 *
 * O(m*n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int strStr(std::string haystack, std::string needle)
  {
    for (int i = 0; i < haystack.length(); i++)
    {
      for (int j = 0; j < needle.length(); j++)
      {
        if (needle[j] != haystack[i + j])
        {
          break;
        }

        if (j == needle.length() - 1)
        {
          return i;
        }
      }
    }
    return -1;
  }
};