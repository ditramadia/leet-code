struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * Add Two Numbers
 * Recursion approach
 * https://leetcode.com/problems/add-two-numbers
 *
 * Created: 2024-03-27
 * Updated: 2024-03-27
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 19ms runtime
 */

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    if (!l1 && !l2)
      return nullptr;

    if (!l1)
      return addTwoNumbers(new ListNode(0), l2);
    if (!l2)
      return addTwoNumbers(l1, new ListNode(0));

    int s = l1->val + l2->val;
    int o = s % 10;
    int c = s / 10;
    if (c > 0)
    {
      if (l1->next)
      {
        l1->next->val += c;
      }
      else if (l2->next)
      {
        l2->next->val += c;
      }
      else
      {
        return new ListNode(o, new ListNode(c));
      }
    }
    return new ListNode(o, addTwoNumbers(l1->next, l2->next));
  }
};