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
 * Iteration approach
 * https://leetcode.com/problems/add-two-numbers
 *
 * Created: 2024-03-27
 * Updated: 2024-03-27
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 15ms runtime
 */

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *dummy = new ListNode();
    ListNode *i = dummy;
    int c = 0;

    while (l1 || l2 || c)
    {
      int val1 = l1 ? l1->val : 0;
      int val2 = l2 ? l2->val : 0;

      int s = val1 + val2 + c;
      int o = s % 10;
      c = s / 10;

      i->next = new ListNode(o);
      i = i->next;

      l1 = l1 ? l1->next : nullptr;
      l2 = l2 ? l2->next : nullptr;
    }

    ListNode *ret = dummy->next;
    delete dummy;
    return ret;
  }
};