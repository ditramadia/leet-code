#include <algorithm>

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
  int binaryTreeDepth(TreeNode *root, int baseDepth)
  {
    if (!root)
      return baseDepth;

    return std::max(binaryTreeDepth(root->left, baseDepth + 1), binaryTreeDepth(root->right, baseDepth + 1));
  }

  bool isBalanced(TreeNode *root)
  {
    if (!root)
      return true;

    int leftDepth = binaryTreeDepth(root->left, 1);
    int rightDepth = binaryTreeDepth(root->right, 1);

    if (abs(leftDepth - rightDepth) <= 1)
    {
      return isBalanced(root->left) && isBalanced(root->right);
    }
    return false;
  }
};