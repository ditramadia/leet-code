#include <vector>

/**
 * Merge Sorted Array
 * Brute force
 * https://leetcode.com/problems/merge-sorted-array/
 *
 * Created: 2024-04-07
 * Updated: 2024-04-07
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
  {
    if (n == 0)
      return;
    if (m == 0)
    {
      nums1 = nums2;
      return;
    }

    std::vector<int> _temp = std::vector<int>(m + n, 0);
    int j = 0;
    int k = 0;
    for (int i = 0; i < m + n; i++)
    {
      if (j >= m)
      {
        _temp[i] = nums2[k];
        k++;
        continue;
      }
      if (k >= n)
      {
        _temp[i] = nums1[j];
        j++;
        continue;
      }

      if (nums1[j] <= nums2[k])
      {
        _temp[i] = nums1[j];
        j++;
      }
      else
      {
        _temp[i] = nums2[k];
        k++;
      }
    }

    nums1 = _temp;
  }
};