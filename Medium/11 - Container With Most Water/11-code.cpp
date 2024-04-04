#include <vector>
#include <algorithm>

/**
 * Container With Most Water
 * Sliding window approach
 * https://leetcode.com/problems/container-with-most-water/
 *
 * Created: 2024-04-04
 * Updated: 2024-04-04
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 46ms runtime
 */

class Solution
{
public:
  int maxArea(std::vector<int> &height)
  {
    int area = 0;
    int i = 0;
    int j = height.size() - 1;

    while (j > i && j != i)
    {
      int minHeight = std::min(height[i], height[j]);
      area = minHeight > area / (j - i) ? minHeight * (j - i) : area;

      if (height[i] >= height[j])
        j--;
      else
        i++;
    }

    return area;
  }
};