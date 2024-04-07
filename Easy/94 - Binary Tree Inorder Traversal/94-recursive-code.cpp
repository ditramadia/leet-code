#include <vector>

/**
 * Binary Tree Inorder Traversal
 * Recursive
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 *
 * Created: 2024-04-07
 * Updated: 2024-04-07
 * Author: Ditra Amadia
 *
 * O(2^n) time complexity
 * 0ms runtime
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
  std::vector<int> inorderTraversal(TreeNode *root)
  {
    std::vector<int> result;

    if (!root)
    {
      return result;
    }

    result.push_back(root->val);
    std::vector<int> _left;
    std::vector<int> _right;

    if (!root->left && !root->right)
    {
      return result;
    }

    // If root doesnt have a left child, insert the right child inorder traveral
    if (root->right)
    {
      _right = inorderTraversal(root->right);
    }

    // If root doesnt have a right child, insert the left child inorder traversal
    if (root->left)
    {
      _left = inorderTraversal(root->left);
    }

    // Concat the vectors
    _left.insert(_left.end(), result.begin(), result.end());
    result = _left;
    result.insert(result.end(), _right.begin(), _right.end());
    return result;
  }
};