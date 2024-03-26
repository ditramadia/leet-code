#include <string>

/**
 * Length of Last Word
 * Brute force approach
 * https://leetcode.com/problems/length-of-last-word/
 *
 * Created: 2024-03-24
 * Updated: 2024-03-24
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int lengthOfLastWord(std::string s)
  {
    int c = 0;
    for (int i = s.length() - 1; i > -1; i--)
    {
      if (s[i] == ' ' && c > 0)
        break;
      if (s[i] == ' ')
        continue;
      c++;
    }
    return c;
  }
};