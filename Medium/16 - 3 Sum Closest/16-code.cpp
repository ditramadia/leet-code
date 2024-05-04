#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

/**
 * 3 Sum Closest
 * Binary search approach
 * https://leetcode.com/problems/3sum-closest/
 *
 * Created: 2024-05-04
 * Updated: 2024-05-04
 * Author: Ditra Amadia
 *
 * O(n^2) time complexity
 * 15ms runtime
 */

class Solution
{
public:
  int threeSumClosest(std::vector<int> &nums, int target)
  {
    int sum = nums[0] + nums[1] + nums[2];
    int delta = std::abs(target - sum);

    std::sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n - 2; i++)
    {
      int l = i + 1;
      int r = n - 1;

      int a = nums[i];

      while (l < r)
      {
        int b = nums[l];
        int c = nums[r];

        int _sum = a + b + c;
        int _delta = std::abs(target - _sum);

        if (_delta == 0)
          return _sum;
        if (_delta < delta)
        {
          delta = _delta;
          sum = _sum;
        }

        if (_sum < target)
        {
          l++;
        }
        else
        {
          r--;
        }
      }
    }

    return sum;
  }
};