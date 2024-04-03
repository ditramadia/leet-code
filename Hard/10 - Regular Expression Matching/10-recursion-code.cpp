#include <string>

/**
 * Regular Expresion Matching
 * Recursion approach
 * https://leetcode.com/problems/regular-expression-matching/
 *
 * Created: 2024-04-03
 * Updated: 2024-04-03
 * Author: Ditra Amadia
 *
 * O(2^n) time complexity
 * @error: Error in test case 342
 * @summary: Memory Limit Exceeded
 */

class Solution
{
public:
  bool isMatchRec(std::string s, std::string p, int i, int j)
  {
    if (i >= s.length() && j >= p.length())
      return true;
    if (j >= p.length())
      return false;

    // if current character is a match
    bool match = i < s.length() && (s[i] == p[j] || p[j] == '.');

    // if current pattern has a star
    if (j + 1 < p.length() && p[j + 1] == '*')
    {
      return (match && isMatchRec(s, p, i + 1, j)) || isMatchRec(s, p, i, j + 2);
    }

    if (match)
      return isMatchRec(s, p, i + 1, j + 1);

    return false;
  }

  bool isMatch(std::string s, std::string p)
  {
    return isMatchRec(s, p, 0, 0);
  }
};