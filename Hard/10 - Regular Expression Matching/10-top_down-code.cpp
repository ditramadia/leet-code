#include <string>

/**
 * Regular Expresion Matching
 * Top-down DP approach
 * https://leetcode.com/problems/regular-expression-matching/
 *
 * Created: 2024-04-03
 * Updated: 2024-04-03
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 11ms runtime
 */

class Solution
{
public:
  bool isMatchRec(int **dp, std::string s, std::string p, int i, int j)
  {
    if (dp[i][j] != -1)
      return dp[i][j];

    bool result;
    if (i >= s.length() && j >= p.length())
    {
      dp[i][j] = true;
      return true;
    }
    if (j >= p.length())
    {
      dp[i][j] = false;
      return false;
    }

    // if current character is a match
    bool match = i < s.length() && (s[i] == p[j] || p[j] == '.');

    // if current pattern has a star
    if (j + 1 < p.length() && p[j + 1] == '*')
    {
      dp[i][j] = (match && isMatchRec(dp, s, p, i + 1, j)) || isMatchRec(dp, s, p, i, j + 2);
      return dp[i][j];
    }

    if (match)
    {
      dp[i][j] = isMatchRec(dp, s, p, i + 1, j + 1);
      return dp[i][j];
    }

    dp[i][j] = false;
    return false;
  }

  bool isMatch(std::string s, std::string p)
  {
    int **dp = new int *[s.length() + 1];
    for (int i = 0; i <= s.length(); i++)
    {
      dp[i] = new int[p.length() + 1];
      for (int j = 0; j <= p.length(); j++)
        dp[i][j] = -1;
    }

    return isMatchRec(dp, s, p, 0, 0);
  }
};