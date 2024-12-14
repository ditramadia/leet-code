/**
 * Swap Nodes in Pairs
 * https://leetcode.com/problems/swap-nodes-in-pairs/
 *
 * Created: 2024-12-14
 * Updated: 2024-12-14
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *swapPairs(ListNode *head)
  {
    const int length = getLength(head);
    ListNode *res = new ListNode(0, head);
    ListNode *a = res;
    ListNode *curr = head;

    for (int i = 0; i < length / 2; i++)
    {
      ListNode *b = curr->next;
      curr->next = b->next;
      b->next = a->next;
      a->next = b;
      a = curr;
      curr = curr->next;
    }

    return res->next;
  }

private:
  int getLength(ListNode *l)
  {
    int i = 0;
    for (ListNode *curr = l; curr; curr = curr->next)
      i++;
    return i;
  }
};