/**
 * Symmetric Tree
 * Recursive
 * https://leetcode.com/problems/symmetric-tree/
 *
 * Created: 2024-04-23
 * Updated: 2024-04-23
 * Author: Ditra Amadia
 *
 * O(2^n) time complexity
 * 3ms runtime
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
  bool isSame(TreeNode *root1, TreeNode *root2)
  {
    if (!root1 && !root2)
      return true;

    if (!root1 || !root2)
      return false;

    if (root1->val == root2->val)
      return isSame(root1->left, root2->right) && isSame(root1->right, root2->left);
    return false;
  }

  bool isSymmetric(TreeNode *root)
  {
    if (!root->left && !root->right)
      return true;

    if (!root->left || !root->right)
      return false;

    if (root->left->val == root->right->val)
      return isSame(root->left, root->right);
    return false;
  }
};