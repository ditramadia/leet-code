#include <vector>
#include <bits/stdc++.h>

/**
 * 3 Sum
 * Binary search approach
 * https://leetcode.com/problems/3sum/
 *
 * Created: 2024-04-27
 * Updated: 2024-04-27
 * Author: Ditra Amadia
 *
 * O(n^2) time complexity
 * 50ms runtime
 */

class Solution
{
public:
  std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
  {
    std::sort(nums.begin(), nums.end());
    int len = nums.size();
    std::vector<std::vector<int>> ret;

    for (int i = 0; i < len - 2; i++)
    {
      int a = nums[i];

      if (i > 0 && a == nums[i - 1])
      {
        continue;
      }

      // Two Sum
      int l = i + 1;
      int r = len - 1;

      while (l < r)
      {
        if (a + nums[l] + nums[r] == 0)
        {
          std::vector<int> twoSum{a, nums[l], nums[r]};
          ret.push_back(twoSum);
          // Move l forward only if the left element is not a duplicate
          l++;
          while (l < r && nums[l] == nums[l - 1])
          {
            l++;
          }

          // Move r backward only if the right element is not a duplicate
          r--;
          while (l < r && nums[r] == nums[r + 1])
          {
            r--;
          }
          continue;
        }

        if (a + nums[l] + nums[r] > 0)
        {
          r--;
        }
        else
        {
          l++;
        }
      }
    }

    return ret;
  }
};