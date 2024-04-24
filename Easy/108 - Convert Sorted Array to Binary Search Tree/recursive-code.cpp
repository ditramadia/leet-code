#include <vector>

/**
 * Balanced Binary Tree
 * Recursive
 * https://leetcode.com/problems/balanced-binary-tree/
 *
 * Created: 2024-04-24
 * Updated: 2024-04-24
 * Author: Ditra Amadia
 *
 * O(2^n) time complexity
 * 4ms runtime
 */

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  TreeNode *sortedArrayToBST(std::vector<int> &nums)
  {
    int mid = nums.size() / 2;

    TreeNode *ret = new TreeNode(nums[mid]);

    if (mid > 0)
    {
      std::vector<int> leftNums;
      for (int i = 0; i < mid; i++)
      {
        leftNums.push_back(nums[i]);
      }
      ret->left = sortedArrayToBST(leftNums);
    }

    if (mid < nums.size() - 1)
    {
      std::vector<int> rightNums;
      for (int i = mid + 1; i < nums.size(); i++)
      {
        rightNums.push_back(nums[i]);
      }
      ret->right = sortedArrayToBST(rightNums);
    }

    return ret;
  }
};