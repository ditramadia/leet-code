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
 * https://leetcode.com/problems/merge-two-sorted-lists/
 *
 * Created: 2024-03-28
 * Updated: 2024-03-28
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode *dummy = new ListNode(0);
    ListNode *i = dummy;

    while (list1 || list2)
    {
      int val;

      if (!list1)
      {
        val = list2->val;
        list2 = list2->next;
      }
      else if (!list2)
      {
        val = list1->val;
        list1 = list1->next;
      }
      else
      {
        if (list1->val <= list2->val)
        {
          val = list1->val;
          list1 = list1->next;
        }
        else
        {
          val = list2->val;
          list2 = list2->next;
        }
      }

      ListNode *newNode = new ListNode(val);
      i->next = newNode;
      i = newNode;
    }

    ListNode *ret = dummy->next;
    delete dummy;
    return ret;
  }
};