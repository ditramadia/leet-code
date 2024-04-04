/**
 * Climbing Stairs
 * DP bottom-up approach
 * https://leetcode.com/problems/climbing-stairs/
 *
 * Created: 2024-04-04
 * Updated: 2024-04-04
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int climbStairs(int n)
  {
    int dp1 = 0;
    int dp2 = 1;

    for (int i = 1; i <= n; i++)
    {
      int _temp = dp1 + dp2;
      dp1 = dp2;
      dp2 = _temp;
    }

    return dp2;
  }
};