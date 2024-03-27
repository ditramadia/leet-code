#include <vector>

/**
 * Median of Sorted Arrays
 * Binary search approach
 * https://leetcode.com/problems/median-of-two-sorted-arrays/
 *
 * Created: 2024-03-27
 * Updated: 2024-03-27
 * Author: Ditra Amadia
 *
 * O(log (m + n)) time complexity
 * 23ms runtime
 */

class Solution
{
public:
  double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
  {
    int l1 = 0;
    int r1 = nums1.size() - 1;

    int l2 = 0;
    int r2 = nums2.size() - 1;

    int l = 0;
    int r = 0;

    while (l1 <= r1 || l2 <= r2)
    {
      if (r1 < l1)
      {
        l = nums2[l2];
        r = nums2[r2];
        l2++;
        r2--;
      }
      else if (r2 < l2)
      {
        l = nums1[l1];
        r = nums1[r1];
        l1++;
        r1--;
      }
      else
      {
        // compare value of l1 with value of l2
        if (nums1[l1] <= nums2[l2])
        {
          l = nums1[l1];
          l1++;
        }
        else
        {
          l = nums2[l2];
          l2++;
        }

        // compare value of r1 with value of r2
        if (nums1[r1] >= nums2[r2])
        {
          r = nums1[r1];
          r1--;
        }
        else
        {
          r = nums2[r2];
          r2--;
        }
      }
    }

    return (double(l) + double(r)) / 2;
  }
};