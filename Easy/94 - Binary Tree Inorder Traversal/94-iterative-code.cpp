#include <vector>
#include <stack>

/**
 * Binary Tree Inorder Traversal
 * Iterative DFS
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 *
 * Created: 2024-04-07
 * Updated: 2024-04-07
 * Author: Ditra Amadia
 * Inspired by: lvlolitte https://leetcode.com/problems/binary-tree-inorder-traversal/solutions/31213/iterative-solution-in-java-simple-and-readable/
 *
 * O(n) time complexity
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
    std::vector<int> res;
    std::stack<TreeNode *> stack;
    TreeNode *i = root;

    while (i != nullptr || !stack.empty())
    {
      // Shift to the most left node of the current i
      while (i != nullptr)
      {
        stack.push(i);
        i = i->left;
      }

      // Remove the i from the stack and push it into result
      i = stack.top();
      res.push_back(i->val);
      stack.pop();

      // Shift to the dircet right node of the current i
      i = i->right;
    }

    return res;
  }
};