#include <algorithm>

/**
 * Maximum Depth of Binary Tree
 * Recursive
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
 *
 * Created: 2024-04-23
 * Updated: 2024-04-23
 * Author: Ditra Amadia
 *
 * O(2^n) time complexity
 * 5ms runtime
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
  int maxDepth(TreeNode *root, int depth)
  {
    if (!root)
      return depth + 0;

    return std::max(maxDepth(root->left, depth + 1), maxDepth(root->right, depth + 1));
  }

  int maxDepth(TreeNode *root)
  {
    if (!root)
      return 0;

    return std::max(maxDepth(root->left, 1), maxDepth(root->right, 1));
  }
};