/**
 * Same Tree
 * Recursive
 * https://leetcode.com/problems/same-tree/
 *
 * Created: 2024-04-19
 * Updated: 2024-04-19
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
  bool isSameTree(TreeNode *p, TreeNode *q)
  {
    if (!p && !q)
      return true;

    if (!p && q)
      return false;
    if (p && !q)
      return false;

    if (p->val != q->val)
      return false;

    bool left = false;
    bool right = false;
    left = isSameTree(p->left, q->left);
    right = isSameTree(p->right, q->right);

    return right && left;
  }
};